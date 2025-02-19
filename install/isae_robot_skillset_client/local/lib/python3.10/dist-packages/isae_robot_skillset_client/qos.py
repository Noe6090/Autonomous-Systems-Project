from rclpy.qos import QoSProfile, DurabilityPolicy, HistoryPolicy, ReliabilityPolicy, LivelinessPolicy

SOFT_STATE_QOS = QoSProfile(durability=DurabilityPolicy.VOLATILE,
history=HistoryPolicy.KEEP_LAST,
depth=1,
liveliness=LivelinessPolicy.AUTOMATIC,
reliability=ReliabilityPolicy.BEST_EFFORT)

HARD_STATE_QOS = QoSProfile(durability=DurabilityPolicy.TRANSIENT_LOCAL,
history=HistoryPolicy.KEEP_LAST,
depth=1,
liveliness=LivelinessPolicy.AUTOMATIC,
reliability=ReliabilityPolicy.RELIABLE)

EVENT_QOS = QoSProfile(durability=DurabilityPolicy.VOLATILE,
history=HistoryPolicy.KEEP_ALL,
liveliness=LivelinessPolicy.AUTOMATIC,
reliability=ReliabilityPolicy.RELIABLE)
