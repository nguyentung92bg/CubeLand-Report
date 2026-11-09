/* IL2CPP: Rotatelab.Extensions$$BlockInputDuringAnimation
PrimeTween_Sequence_o Rotatelab_Extensions__BlockInputDuringAnimation (PrimeTween_Sequence_o sequence, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$BlockInputDuringAnimation
   PrimeTween_Sequence_o Rotatelab_Extensions__BlockInputDuringAnimation (PrimeTween_Sequence_o
   sequence, const MethodInfo* method); */

void Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_00fd2f8c + 0xfd2e30);
  uStack_1c = param_6;
  uStack_20 = param_5;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2f90 + 0xfd2e58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2f94 + 0xfd2e64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2f98 + 0xfd2e70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2f9c + 0xfd2e7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2fa0 + 0xfd2e88));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_00fd2fa4 + 0xfd2e9c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_UI_UIInputBlocker__BlockInputWithinScope_112443c(iVar1,0);
  piVar5 = *(int **)(_UNK_00fd2fa8 + 0xfd2ecc);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[2];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2fac + 0xfd2f14));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_00fd2fb0 + 0xfd2f34),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 8);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (auStack_38,&uStack_28,uVar2,iVar6,0,**(undefined4 **)(_UNK_00fd2fb4 + 0xfd2f68));
  *param_1 = CONCAT44(uStack_24,uStack_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return;
}

