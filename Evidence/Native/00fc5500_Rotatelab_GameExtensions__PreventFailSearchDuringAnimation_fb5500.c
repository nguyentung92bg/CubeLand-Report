/* IL2CPP: Rotatelab.GameExtensions$$PreventFailSearchDuringAnimation
PrimeTween_Sequence_o Rotatelab_GameExtensions__PreventFailSearchDuringAnimation (PrimeTween_Sequence_o sequence, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$PreventFailSearchDuringAnimation
   PrimeTween_Sequence_o Rotatelab_GameExtensions__PreventFailSearchDuringAnimation
   (PrimeTween_Sequence_o sequence, const MethodInfo* method); */

void Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
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
  
  pcVar4 = (char *)(_UNK_00fc5678 + 0xfc551c);
  uStack_1c = param_6;
  uStack_20 = param_5;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc567c + 0xfc5544));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5680 + 0xfc5550));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5684 + 0xfc555c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5688 + 0xfc5568));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc568c + 0xfc5574));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fc5690 + 0xfc5588));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_LevelStateManager__PreventFailSearchWithinScope_1017a60(iVar1,0);
  piVar5 = *(int **)(_UNK_00fc5694 + 0xfc55b8);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[6];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc5698 + 0xfc5600));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_00fc569c + 0xfc5620),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 0x18);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (auStack_38,&uStack_28,uVar2,iVar6,0,**(undefined4 **)(_UNK_00fc56a0 + 0xfc5654));
  *param_1 = CONCAT44(uStack_24,uStack_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return;
}

