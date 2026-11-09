/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$get_Nakama
Hiro_NakamaSystem_o* Rotatelab_Networking_CloudSaveManager__get_Nakama (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$get_Nakama
   Hiro_NakamaSystem_o* Rotatelab_Networking_CloudSaveManager__get_Nakama
   (Rotatelab_Networking_CloudSaveManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Networking_CloudSaveManager__get_Nakama_11417dc(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01151830 + 0x11517ec);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151834 + 0x1151800));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01151838 + 0x1151814));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0x20);
}

