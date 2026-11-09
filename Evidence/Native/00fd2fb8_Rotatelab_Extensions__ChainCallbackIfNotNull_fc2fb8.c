/* IL2CPP: Rotatelab.Extensions$$ChainCallbackIfNotNull
PrimeTween_Sequence_o Rotatelab_Extensions__ChainCallbackIfNotNull (PrimeTween_Sequence_o sequence, System_Action_o* callback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$ChainCallbackIfNotNull
   PrimeTween_Sequence_o Rotatelab_Extensions__ChainCallbackIfNotNull (PrimeTween_Sequence_o
   sequence, System_Action_o* callback, const MethodInfo* method); */

void Rotatelab_Extensions__ChainCallbackIfNotNull_fc2fb8
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = param_6;
  uStack_10 = param_5;
  uStack_18 = param_3;
  uStack_14 = param_4;
  if (param_7 != 0) {
    PrimeTween_Sequence__ChainCallback_2cf0180(auStack_28,&uStack_18,param_7,0,0);
  }
  *param_1 = CONCAT44(uStack_14,uStack_18);
  param_1[1] = CONCAT44(uStack_c,uStack_10);
  return;
}

