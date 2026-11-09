/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetEndlessShakeAnimationEnabled
void Rotatelab_Scripts_BlasterController__SetEndlessShakeAnimationEnabled (Rotatelab_Scripts_BlasterController_o* __this, bool enabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetEndlessShakeAnimationEnabled
   void Rotatelab_Scripts_BlasterController__SetEndlessShakeAnimationEnabled
   (Rotatelab_Scripts_BlasterController_o* __this, bool enabled, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__SetEndlessShakeAnimationEnabled_1034fbc
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_01045194 + 0x1044fd8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01045198 + 0x1044fec));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0104519c + 0x1045004) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0xd8),0);
  *(undefined1 *)(param_1 + 0xc6) = 0;
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar4 = (char *)(_UNK_010451a0 + 0x1045044);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010451a4 + 0x1045058));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010451a8 + 0x1045070) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localRotation_361507c(iVar1,*puVar2,puVar2[1],puVar2[2],puVar2[3],0);
  if (param_2 != 0) {
    uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    pcVar4 = (char *)(_UNK_010451ac + 0x10450c8);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010451b0 + 0x10450dc));
      *pcVar4 = '\x01';
    }
    iVar1 = *(int *)(**(int **)(_UNK_010451b4 + 0x10450f0) + 0x5c);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    uVar6 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = *(undefined4 *)(iVar1 + 0x14);
    if (*(int *)(**(int **)(_UNK_010451b8 + 0x10450fc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__ShakeLocalRotation_2ceb538
              (&uStack_38,uVar3,uVar7,uVar6,uVar5,0x3e4ccccd,0x41500000,1,1,0,0xffffffff,0,0,0,0);
    *(undefined8 *)(param_1 + 0xd8) = uStack_38;
    *(undefined8 *)(param_1 + 0xe0) = uStack_30;
    thunk_FUN_00ec5080(param_1 + 0xe0,0);
  }
  return;
}

