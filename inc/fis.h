#ifndef FIS_H
    #define FIS_H
        typedef struct vector_t
        {
            float x;
            float y;
        }  VECTOR;
        void menu();
        void init_vector(VECTOR *vect);
        void decomposing_force(float magnitude_vect, double angle, VECTOR *deco_vect);
        void calcDis(float speed,float velocity,float course_time);
        void kmp2mps(float kph);
        float calculate_work(float force, float displacement, float angle);
        float gravity_potential(float height, float mass);
#endif
