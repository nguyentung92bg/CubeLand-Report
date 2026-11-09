/* IL2CPP: Rotatelab.Extensions$$SetLossyScale
void Rotatelab_Extensions__SetLossyScale (UnityEngine_Transform_o* transform, UnityEngine_Vector3_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$SetLossyScale
   void Rotatelab_Extensions__SetLossyScale (UnityEngine_Transform_o* transform,
   UnityEngine_Vector3_o value, const MethodInfo* method); */

void Rotatelab_Extensions__SetLossyScale_fc26e4
               (int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Transform__get_parent_36148d8(param_1,0);
  if (iVar1 != 0) {
    UnityEngine_Transform__get_localScale_36154c0(&fStack_3c,iVar1,0);
    param_3 = param_3 / fStack_38;
    param_4 = param_4 / fStack_34;
    param_2 = param_2 / fStack_3c;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  UnityEngine_Transform__set_localScale_36155dc(param_1,param_2,param_3,param_4,0);
  return;
}

