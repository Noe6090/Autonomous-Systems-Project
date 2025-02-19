(define (domain isae_robot)
    (:requirements :strips :typing)
    (:types
        Pose
        Color
    )
    (:predicates
        (robot-at ?p - Pose)
        (reachable ?a ?b - Pose)
        (object-at ?o - Color ?p - Pose)
        (detected ?o)
        (saved ?o)
    )

    (:action detect_target
        :parameters (
            ?o - Color
            ?p - Pose
        )
        :precondition (and
            (robot-at ?p)
            (object-at ?o ?p)
        )
        :effect (and
            (detected ?o)
        )
    )

    (:action move_to
        :parameters (
            ?a - Pose
            ?b - Pose
        )
        :precondition (and
            (robot-at ?a)
            (reachable ?a ?b)
        )
        :effect (and
            (not (robot-at ?a))
            (robot-at ?b)
        )
    )

    (:action take_picture
        :parameters (
            ?o - Color
            ?p - Pose
        )
        :precondition (and
            (robot-at ?p)
            (object-at ?o ?p)
            (detected ?o)
        )
        :effect (and
            (saved ?o)
        )
    )

)