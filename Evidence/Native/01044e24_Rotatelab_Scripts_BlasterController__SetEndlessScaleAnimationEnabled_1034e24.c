/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetEndlessScaleAnimationEnabled
void Rotatelab_Scripts_BlasterController__SetEndlessScaleAnimationEnabled (Rotatelab_Scripts_BlasterController_o* __this, bool enabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetEndlessScaleAnimationEnabled
   void Rotatelab_Scripts_BlasterController__SetEndlessScaleAnimationEnabled
   (Rotatelab_Scripts_BlasterController_o* __this, bool enabled, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__SetEndlessScaleAnimationEnabled_1034e24
               (int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_01044fa4 + 0x1044e40);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044fa8 + 0x1044e54));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01044fac + 0x1044e6c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 200),0);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar4 = (char *)(_UNK_01044fb0 + 0x1044ea4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01044fb4 + 0x1044eb8));
    *pcVar4 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_01044fb8 + 0x1044ed0) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar1,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
             *(undefined4 *)(iVar2 + 0x14),0);
  if (param_2 != 0) {
    uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684
              (&uStack_38,uVar3,0x3f8ccccd,0x3eb33333,0,0,0,0,0,0xffffffff,3,0,0,0,0);
    *(undefined8 *)(param_1 + 200) = uStack_38;
    *(undefined8 *)(param_1 + 0xd0) = uStack_30;
    thunk_FUN_00ec5080(param_1 + 0xd0,0);
  }
  return;
}

