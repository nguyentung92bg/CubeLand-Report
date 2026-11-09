/* IL2CPP: Rotatelab.UI.UIInputBlocker.BlockInputScope$$Get
Rotatelab_UI_UIInputBlocker_BlockInputScope_o* Rotatelab_UI_UIInputBlocker_BlockInputScope__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIInputBlocker.BlockInputScope$$Get
   Rotatelab_UI_UIInputBlocker_BlockInputScope_o* Rotatelab_UI_UIInputBlocker_BlockInputScope__Get
   (const MethodInfo* method); */

undefined4 Rotatelab_UI_UIInputBlocker_BlockInputScope__Get_1124440(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_011344ec + 0x1134450);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011344f0 + 0x1134464));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011344f4 + 0x1134470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011344f8 + 0x113447c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011344fc + 0x1134490) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Pool_GenericPool_object___Get_24058d0
                    (**(undefined4 **)(_UNK_01134500 + 0x11344ac));
  iVar2 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_01134504 + 0x11344c0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIInputBlocker__TrySetInputAllowed_1124020(iVar2,0,uVar1);
  return uVar1;
}

