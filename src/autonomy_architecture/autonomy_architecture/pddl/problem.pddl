(define (problem isae_robot_problem)
    (:domain isae_robot)

    (:objects
        wp_0_0 wp_1_0 wp_0_1 wp_1_1 - Pose
        red_box blue_box - Color
    )

    (:init
        (robot-at wp_0_0)
        (object-at red_box wp_1_0)
        (object-at blue_box wp_0_1)
        (reachable wp_0_0 wp_0_1)
        (reachable wp_0_0 wp_1_0)
        (reachable wp_1_0 wp_1_1)
        (reachable wp_0_1 wp_1_1)
        (reachable wp_0_1 wp_0_0)
        (reachable wp_1_0 wp_0_0)
        (reachable wp_1_1 wp_1_0)
        (reachable wp_1_1 wp_0_1)
    )

    (:goal (and
        (saved red_box)
        (saved blue_box)
    ))

)