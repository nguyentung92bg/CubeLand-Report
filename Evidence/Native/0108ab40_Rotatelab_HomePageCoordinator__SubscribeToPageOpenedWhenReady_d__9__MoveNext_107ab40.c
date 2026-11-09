/* IL2CPP: Rotatelab.HomePageCoordinator.<SubscribeToPageOpenedWhenReady>d__9$$MoveNext
bool Rotatelab_HomePageCoordinator__SubscribeToPageOpenedWhenReady_d__9__MoveNext (Rotatelab_HomePageCoordinator__SubscribeToPageOpenedWhenReady_d__9_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.HomePageCoordinator.<SubscribeToPageOpenedWhenReady>d__9$$MoveNext
   bool Rotatelab_HomePageCoordinator__SubscribeToPageOpenedWhenReady_d__9__MoveNext
   (Rotatelab_HomePageCoordinator__SubscribeToPageOpenedWhenReady_d__9_o* __this, const MethodInfo*
   method); */

undefined4
Rotatelab_HomePageCoordinator__SubscribeToPageOpenedWhenReady_d__9__MoveNext_107ab40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  pcVar3 = (char *)(_UNK_0108ac7c + 0x108ab54);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ac80 + 0x108ab68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ac84 + 0x108ab74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ac88 + 0x108ab80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ac8c + 0x108ab8c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 8) < 2) {
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    puVar5 = *(undefined4 **)(_UNK_0108ac90 + 0x108abb8);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
    if (*(int *)(**(int **)(_UNK_0108ac94 + 0x108abd0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
    if (iVar1 == 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108ac98 + 0x108ac30));
      uVar4 = 0;
      System_Action_Int32Enum____ctor_1f10670
                (uVar2,uVar6,**(undefined4 **)(_UNK_0108ac9c + 0x108ac50),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_UI_UIManager__add_OnPageOpened_1127194(iVar1,uVar2,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar4;
}

