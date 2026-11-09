/* IL2CPP: Rotatelab.HpTextData$$get_Rotation
UnityEngine_Quaternion_o Rotatelab_HpTextData__get_Rotation (Rotatelab_HpTextData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.HpTextData$$get_Rotation
   UnityEngine_Quaternion_o Rotatelab_HpTextData__get_Rotation (Rotatelab_HpTextData_o* __this,
   const MethodInfo* method); */

void Rotatelab_HpTextData__get_Rotation_1070db8(undefined8 *param_1,int param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fStack_1c = -*(float *)(param_2 + 0x14);
  fStack_18 = -*(float *)(param_2 + 0x18);
  uStack_28 = *(undefined4 *)(param_2 + 0x20);
  fStack_14 = -*(float *)(param_2 + 0x1c);
  uStack_24 = *(undefined4 *)(param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 0x28);
  UnityEngine_Quaternion__Internal_LookRotation_35ee358(&uStack_38,&fStack_1c,&uStack_28,0);
  *param_1 = uStack_38;
  param_1[1] = uStack_30;
  return;
}

