/* IL2CPP: Rotatelab.HomePageCoordinator$$get_IsBusy
bool Rotatelab_HomePageCoordinator__get_IsBusy (Rotatelab_HomePageCoordinator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.HomePageCoordinator$$get_IsBusy
   bool Rotatelab_HomePageCoordinator__get_IsBusy (Rotatelab_HomePageCoordinator_o* __this, const
   MethodInfo* method); */

bool Rotatelab_HomePageCoordinator__get_IsBusy_107a03c(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)(_UNK_0108a0d8 + 0x108a050);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a0dc + 0x108a064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a0e0 + 0x108a070));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0x1d) != '\0') {
    return true;
  }
  cVar1 = *(char *)(param_1 + 0x14);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x1c);
  }
  if (bVar4 && cVar1 == '\0') {
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Count_2000974
                        (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_0108a0e4 + 0x108a0bc));
      return 0 < iVar2;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4(1);
  }
  return true;
}

