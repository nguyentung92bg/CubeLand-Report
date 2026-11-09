/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$TutorialActivateBooster
void Rotatelab_Boosters_SpecialBooster__TutorialActivateBooster (Rotatelab_Boosters_SpecialBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$TutorialActivateBooster
   void Rotatelab_Boosters_SpecialBooster__TutorialActivateBooster
   (Rotatelab_Boosters_SpecialBooster_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_SpecialBooster__TutorialActivateBooster_113d8ec(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 auStack_28 [16];
  
  pcVar6 = (char *)(_UNK_0114db54 + 0x114d904);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db58 + 0x114d918));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db5c + 0x114d924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db60 + 0x114d930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db64 + 0x114d93c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db68 + 0x114d948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db6c + 0x114d954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db70 + 0x114d960));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db74 + 0x114d96c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db78 + 0x114d978));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db7c + 0x114d984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114db80 + 0x114d990));
    *pcVar6 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0114db84 + 0x114d9a4);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(char *)(iVar1 + 0x39) != '\0') && (*(char *)(param_1 + 0x24) == '\0')) {
    puVar2 = *(undefined4 **)(_UNK_0114db88 + 0x114d9e0);
    *(undefined1 *)(param_1 + 0x24) = 1;
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = RemoteVariableSO_bool___op_Implicit_1a81fac
                      (*(undefined4 *)(iVar1 + 0x1c),**(undefined4 **)(_UNK_0114db8c + 0x114da04));
    if (iVar1 == 0) {
      piVar5 = *(int **)(_UNK_0114dba4 + 0x114daf4);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar5;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
      uVar3 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84(0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x023b4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),uVar3,**(undefined4 **)(_UNK_0114dbac + 0x114db44),
                 *(undefined4 *)(iVar1 + 0x14));
      return;
    }
    piVar5 = *(int **)(_UNK_0114db90 + 0x114da20);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xcc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool__bool___Raise_23a39b8
              (iVar1,0,1,**(undefined4 **)(_UNK_0114db94 + 0x114da60));
    uVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114db98 + 0x114da80));
    System_Action___ctor_2b10bac(uVar4,uVar3,**(undefined4 **)(_UNK_0114db9c + 0x114da9c),0);
    if (*(int *)(**(int **)(_UNK_0114dba0 + 0x114dab0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Delay_2ce9f2c(auStack_28,0x3f59999a,uVar4,0,0,0);
  }
  return;
}

