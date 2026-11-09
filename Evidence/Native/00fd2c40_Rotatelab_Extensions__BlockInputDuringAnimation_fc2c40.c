/* IL2CPP: Rotatelab.Extensions$$BlockInputDuringAnimation
PrimeTween_Tween_o Rotatelab_Extensions__BlockInputDuringAnimation (PrimeTween_Tween_o tween, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$BlockInputDuringAnimation
   PrimeTween_Tween_o Rotatelab_Extensions__BlockInputDuringAnimation (PrimeTween_Tween_o tween,
   const MethodInfo* method); */

void Rotatelab_Extensions__BlockInputDuringAnimation_fc2c40
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
  
  pcVar4 = (char *)(_UNK_00fd2de0 + 0xfd2c5c);
  uStack_1c = param_6;
  uStack_20 = param_5;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2de4 + 0xfd2c84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2de8 + 0xfd2c90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2dec + 0xfd2c9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2df0 + 0xfd2ca8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2df4 + 0xfd2cb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2df8 + 0xfd2cc0));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_00fd2dfc + 0xfd2cd4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_UI_UIInputBlocker__BlockInputWithinScope_112443c(iVar1,0);
  piVar5 = *(int **)(_UNK_00fd2e00 + 0xfd2d04);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2e04 + 0xfd2d4c));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_00fd2e08 + 0xfd2d6c),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_00fd2e0c + 0xfd2d94) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (auStack_38,&uStack_28,uVar2,iVar6,0,**(undefined4 **)(_UNK_00fd2e10 + 0xfd2dbc));
  *param_1 = CONCAT44(uStack_24,uStack_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return;
}

