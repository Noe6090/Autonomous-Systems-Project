from typing import List, Tuple
import subprocess

def call_ff(folder: str, domain: str, problem: str, ff_exec: str = '/home/etdisc/depots/FF-v2.3/ff') -> str:
    ffp = subprocess.Popen([ff_exec, '-p', folder+'/', '-o', domain, '-f', problem], stdout=subprocess.PIPE)
    result, errors = ffp.communicate()
    return result.decode()

def parse_ff_result(result: str) -> List[Tuple]:
    def parse_line(l):
        i = l.find(':')
        return l[i-1], l[i+2:].split(" ")

    lines = result.split('\n')
    b = False

    plan = dict()
    for l in lines:
        if 'step' in l:
            b = True
        elif 'time spent' in l:
            b = False
        if b and ':' in l:
            i, a = parse_line(l)
            plan[i] = a

    return [plan[i] for i in sorted(plan)]