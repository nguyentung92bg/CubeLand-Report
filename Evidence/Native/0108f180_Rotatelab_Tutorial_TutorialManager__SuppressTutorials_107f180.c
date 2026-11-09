/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$SuppressTutorials
void Rotatelab_Tutorial_TutorialManager__SuppressTutorials (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$SuppressTutorials
   void Rotatelab_Tutorial_TutorialManager__SuppressTutorials (Rotatelab_Tutorial_TutorialManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__SuppressTutorials_107f180(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_0108f408 + 0x108f198);
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f40c + 0x108f1ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f410 + 0x108f1b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f414 + 0x108f1c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f418 + 0x108f1d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f41c + 0x108f1dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f420 + 0x108f1e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f424 + 0x108f1f4));
    cVar1 = '\x01';
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uVar2 = Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4
                    (cVar1,*(undefined4 *)(param_1 + 0x2c));
  Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(uVar2,*(undefined4 *)(param_1 + 0x30));
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0108f428 + 0x108f224));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x14) + 0xc);
  uVar5 = 0;
  puVar8 = *(undefined4 **)(_UNK_0108f42c + 0x108f268);
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar5) {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0108f430 + 0x108f2d4));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x18) + 0xc);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                (&uStack_38,iVar3,**(undefined4 **)(_UNK_0108f434 + 0x108f318));
      puVar8 = *(undefined4 **)(_UNK_0108f438 + 0x108f340);
      puVar7 = *(undefined4 **)(_UNK_0108f43c + 0x108f348);
      while( true ) {
        iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                          (&uStack_38,*puVar8);
        if (iVar3 == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                    (&uStack_38,**(undefined4 **)(_UNK_0108f440 + 0x108f3a0));
          return;
        }
        if (iStack_2c == 0) break;
        uStack_44 = *puVar7;
        uStack_3c = *(undefined4 *)(iStack_2c + 0xc);
        uStack_40 = 0xffffffff;
        uVar2 = System_Enum__ToString_2bab8c0(&uStack_44,0);
        Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(uVar2,uVar2);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = *(int *)(iVar3 + 0x10 + uVar5 * 4);
    if (iVar6 == 0) break;
    uStack_44 = *puVar8;
    uStack_3c = *(undefined4 *)(iVar6 + 0xc);
    uStack_40 = 0xffffffff;
    uVar2 = System_Enum__ToString_2bab8c0(&uStack_44,0);
    Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(uVar2,uVar2);
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

