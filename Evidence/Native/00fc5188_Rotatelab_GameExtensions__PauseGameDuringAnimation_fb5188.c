/* IL2CPP: Rotatelab.GameExtensions$$PauseGameDuringAnimation
PrimeTween_Sequence_o Rotatelab_GameExtensions__PauseGameDuringAnimation (PrimeTween_Sequence_o sequence, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$PauseGameDuringAnimation
   PrimeTween_Sequence_o Rotatelab_GameExtensions__PauseGameDuringAnimation (PrimeTween_Sequence_o
   sequence, const MethodInfo* method); */

void Rotatelab_GameExtensions__PauseGameDuringAnimation_fb5188
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
  
  pcVar4 = (char *)(_UNK_00fc5300 + 0xfc51a4);
  uStack_1c = param_6;
  uStack_20 = param_5;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5304 + 0xfc51cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5308 + 0xfc51d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc530c + 0xfc51e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5310 + 0xfc51f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5314 + 0xfc51fc));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fc5318 + 0xfc5210));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_LevelStateManager__PauseGameWithinScope_100b1dc(iVar1,0);
  piVar5 = *(int **)(_UNK_00fc531c + 0xfc5240);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[4];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc5320 + 0xfc5288));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_00fc5324 + 0xfc52a8),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 0x10);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (auStack_38,&uStack_28,uVar2,iVar6,0,**(undefined4 **)(_UNK_00fc5328 + 0xfc52dc));
  *param_1 = CONCAT44(uStack_24,uStack_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return;
}

