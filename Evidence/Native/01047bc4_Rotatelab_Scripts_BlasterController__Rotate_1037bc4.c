/* IL2CPP: Rotatelab.Scripts.BlasterController$$Rotate
void Rotatelab_Scripts_BlasterController__Rotate (Rotatelab_Scripts_BlasterController_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$Rotate
   void Rotatelab_Scripts_BlasterController__Rotate (Rotatelab_Scripts_BlasterController_o* __this,
   UnityEngine_Vector3_o targetPosition, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__Rotate_1037bc4
               (int param_1,float param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01047dd8 + 0x1047be4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047ddc + 0x1047bf8));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_68,iVar2,0);
  fStack_68 = param_2 - fStack_68;
  fStack_60 = param_4 - fStack_60;
  fStack_64 = 0.0;
  pcVar4 = (char *)(_UNK_01047de0 + 0x1047c64);
  uStack_30 = 0;
  uStack_28 = 0;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01047de4 + 0x1047c8c));
    *pcVar4 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_01047de8 + 0x1047cb4) + 0x5c);
  uStack_30 = *(undefined8 *)(iVar2 + 0x18);
  uStack_28 = *(undefined4 *)(iVar2 + 0x20);
  UnityEngine_Quaternion__Internal_LookRotation_35ee358(&uStack_50,&fStack_68,&uStack_30,0);
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  UnityEngine_Quaternion__Internal_ToEulerRad_35ee0cc(&fStack_68,&uStack_40,0);
  UnityEngine_Quaternion__Internal_MakePositive_35ee8c0
            (&fStack_68,fStack_68 * _UNK_01047dd4,fStack_64 * _UNK_01047dd4,
             fStack_60 * _UNK_01047dd4,0);
  fVar1 = fStack_64;
  if (*(int *)(**(int **)(_UNK_01047dec + 0x1047d28) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((float *)(param_1 + 0xf8),0);
  uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar5 = *(undefined4 *)(param_1 + 0x70);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_68,3,0);
  PrimeTween_Tween__Rotation_2ce4bd8
            (&fStack_68,uVar3,0,fVar1,0,uVar5,fStack_68,fStack_64,fStack_60,uStack_5c,uStack_58,1,0,
             0,0,0,0);
  *(float *)(param_1 + 0xf8) = fStack_68;
  *(float *)(param_1 + 0xfc) = fStack_64;
  *(float *)(param_1 + 0x100) = fStack_60;
  *(undefined4 *)(param_1 + 0x104) = uStack_5c;
  thunk_FUN_00ec5080(param_1 + 0x100,0);
  return;
}

