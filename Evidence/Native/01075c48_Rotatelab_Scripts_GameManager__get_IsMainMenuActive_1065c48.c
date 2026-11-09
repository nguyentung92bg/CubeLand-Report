/* IL2CPP: Rotatelab.Scripts.GameManager$$get_IsMainMenuActive
bool Rotatelab_Scripts_GameManager__get_IsMainMenuActive (Rotatelab_Scripts_GameManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$get_IsMainMenuActive
   bool Rotatelab_Scripts_GameManager__get_IsMainMenuActive (Rotatelab_Scripts_GameManager_o*
   __this, const MethodInfo* method); */

bool Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01075d00 + 0x1075c58);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075d04 + 0x1075c6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01075d08 + 0x1075c78));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01075d0c + 0x1075c8c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x18),0);
  piVar4 = *(int **)(_UNK_01075d10 + 0x1075cd4);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  return *(int *)(*(int *)(iVar2 + 0x5c) + 8) <= iVar1;
}

