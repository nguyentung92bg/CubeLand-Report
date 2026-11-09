/* IL2CPP: Rotatelab.GameExtensions$$PauseGameDuringAnimation
PrimeTween_Tween_o Rotatelab_GameExtensions__PauseGameDuringAnimation (PrimeTween_Tween_o tween, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$PauseGameDuringAnimation
   PrimeTween_Tween_o Rotatelab_GameExtensions__PauseGameDuringAnimation (PrimeTween_Tween_o tween,
   const MethodInfo* method); */

void Rotatelab_GameExtensions__PauseGameDuringAnimation_fb4fb4
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
  
  pcVar4 = (char *)(_UNK_00fc5154 + 0xfc4fd0);
  uStack_1c = param_6;
  uStack_20 = param_5;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5158 + 0xfc4ff8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc515c + 0xfc5004));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5160 + 0xfc5010));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5164 + 0xfc501c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5168 + 0xfc5028));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc516c + 0xfc5034));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fc5170 + 0xfc5048));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_LevelStateManager__PauseGameWithinScope_100b1dc(iVar1,0);
  piVar5 = *(int **)(_UNK_00fc5174 + 0xfc5078);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[3];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc5178 + 0xfc50c0));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_00fc517c + 0xfc50e0),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 0xc);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_00fc5180 + 0xfc5108) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (auStack_38,&uStack_28,uVar2,iVar6,0,**(undefined4 **)(_UNK_00fc5184 + 0xfc5130));
  *param_1 = CONCAT44(uStack_24,uStack_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return;
}

