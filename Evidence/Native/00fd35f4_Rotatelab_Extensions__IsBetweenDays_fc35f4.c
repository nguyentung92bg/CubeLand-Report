/* IL2CPP: Rotatelab.Extensions$$IsBetweenDays
bool Rotatelab_Extensions__IsBetweenDays (int32_t current, int32_t start, int32_t end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$IsBetweenDays
   bool Rotatelab_Extensions__IsBetweenDays (int32_t current, int32_t start, int32_t end, const
   MethodInfo* method); */

bool Rotatelab_Extensions__IsBetweenDays_fc35f4(int param_1,int param_2,int param_3)

{
  if (param_3 < param_2) {
    return param_2 <= param_1 || param_1 <= param_3;
  }
  return param_2 <= param_1 && param_1 <= param_3;
}

