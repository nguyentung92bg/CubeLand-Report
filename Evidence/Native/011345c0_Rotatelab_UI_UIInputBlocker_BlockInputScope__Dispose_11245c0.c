/* IL2CPP: Rotatelab.UI.UIInputBlocker.BlockInputScope$$Dispose
void Rotatelab_UI_UIInputBlocker_BlockInputScope__Dispose (Rotatelab_UI_UIInputBlocker_BlockInputScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x011340f8) */
/* WARNING: Removing unreachable block (ram,0x01134110) */
/* WARNING: Removing unreachable block (ram,0x01134114) */
/* WARNING: Removing unreachable block (ram,0x011341b4) */
/* WARNING: Removing unreachable block (ram,0x011341cc) */
/* WARNING: Removing unreachable block (ram,0x011341d0) */
/* WARNING: Removing unreachable block (ram,0x011341e4) */
/* WARNING: Removing unreachable block (ram,0x011341e8) */
/* WARNING: Removing unreachable block (ram,0x01134204) */
/* WARNING: Removing unreachable block (ram,0x01134208) */
/* WARNING: Removing unreachable block (ram,0x01134220) */
/* WARNING: Removing unreachable block (ram,0x01134230) */
/* WARNING: Removing unreachable block (ram,0x01134234) */
/* WARNING: Removing unreachable block (ram,0x01134248) */
/* WARNING: Removing unreachable block (ram,0x0113424c) */
/* WARNING: Removing unreachable block (ram,0x01134258) */
/* WARNING: Removing unreachable block (ram,0x0113425c) */
/* WARNING: Removing unreachable block (ram,0x0113427c) */
/* WARNING: Removing unreachable block (ram,0x01134288) */
/* WARNING: Removing unreachable block (ram,0x0113428c) */
/* WARNING: Removing unreachable block (ram,0x01134298) */
/* WARNING: Removing unreachable block (ram,0x011342a8) */
/* WARNING: Removing unreachable block (ram,0x011342ac) */
/* WARNING: Removing unreachable block (ram,0x011342c0) */
/* WARNING: Removing unreachable block (ram,0x011342c4) */
/* WARNING: Removing unreachable block (ram,0x011342d8) */
/* WARNING: Removing unreachable block (ram,0x011342dc) */
/* WARNING: Removing unreachable block (ram,0x011342f4) */
/* WARNING: Removing unreachable block (ram,0x01134318) */
/* WARNING: Removing unreachable block (ram,0x0113431c) */
/* WARNING: Removing unreachable block (ram,0x01134334) */
/* WARNING: Removing unreachable block (ram,0x01134338) */
/* WARNING: Removing unreachable block (ram,0x01134368) */
/* WARNING: Removing unreachable block (ram,0x0113436c) */
/* WARNING: Removing unreachable block (ram,0x01134380) */
/* WARNING: Removing unreachable block (ram,0x01134384) */
/* WARNING: Removing unreachable block (ram,0x011343ac) */
/* WARNING: Removing unreachable block (ram,0x011343b0) */
/* WARNING: Removing unreachable block (ram,0x011343b4) */
/* WARNING: Removing unreachable block (ram,0x011343bc) */
/* WARNING: Removing unreachable block (ram,0x011343c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIInputBlocker.BlockInputScope$$Dispose
   void Rotatelab_UI_UIInputBlocker_BlockInputScope__Dispose
   (Rotatelab_UI_UIInputBlocker_BlockInputScope_o* __this, const MethodInfo* method); */

void Rotatelab_UI_UIInputBlocker_BlockInputScope__Dispose_11245c0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0113466c + 0x11345d4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134670 + 0x11345e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134674 + 0x11345f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134678 + 0x1134600));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0113467c + 0x1134614) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_GenericPool_object___Release_240597c
            (param_1,**(undefined4 **)(_UNK_01134680 + 0x1134630));
  iVar3 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_01134684 + 0x1134644));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_011343f0 + 0x1134040);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011343f4 + 0x1134054));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011343f8 + 0x1134060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011343fc + 0x113406c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134400 + 0x1134078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134404 + 0x1134084));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134408 + 0x1134090));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113440c + 0x113409c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134410 + 0x11340a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134414 + 0x11340b4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___Remove_267f138
            (*(int *)(iVar3 + 0x10),param_1,**(undefined4 **)(_UNK_01134418 + 0x11340ec));
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_GameObject__get_activeSelf_360212c(iVar1,0);
  if (*(int *)(iVar3 + 0x10) != 0) {
    if (uVar2 != 0 < *(int *)(*(int *)(iVar3 + 0x10) + 0xc)) {
      iVar3 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar3,0,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

