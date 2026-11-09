/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$AnimatePunch
void Rotatelab_Scripts_IceWrapperController__AnimatePunch (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$AnimatePunch
   void Rotatelab_Scripts_IceWrapperController__AnimatePunch
   (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__AnimatePunch_101133c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_01021434 + 0x1021354);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021438 + 0x1021368));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0102143c + 0x102137c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x38),0);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_30,1,0);
  PrimeTween_Tween__Scale_2ce4a3c
            (&uStack_30,uVar1,0x3f866666,0x3f8d1eb7,0x3dcccccd,uStack_30,uStack_2c,uStack_28,
             uStack_24,uStack_20,2,3,0,0,0,0);
  *(undefined8 *)(param_1 + 0x38) = CONCAT44(uStack_2c,uStack_30);
  *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_24,uStack_28);
  thunk_FUN_00ec5080(param_1 + 0x40,0);
  return;
}

