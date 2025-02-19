import uuid


def new_id() -> str:
    uid = uuid.uuid1()
    return str(uid)
