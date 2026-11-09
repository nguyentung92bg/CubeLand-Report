/* IL2CPP: Rotatelab.RemoteConfigManager$$HasSatoriFlag
bool Rotatelab_RemoteConfigManager__HasSatoriFlag (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$HasSatoriFlag
   bool Rotatelab_RemoteConfigManager__HasSatoriFlag (Rotatelab_RemoteConfigManager_o* __this,
   System_String_o* key, const MethodInfo* method); */

uint Rotatelab_RemoteConfigManager__HasSatoriFlag_1074eb8(int param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01084f18 + 0x1084ed0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084f1c + 0x1084ee4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = System_Collections_Generic_Dictionary_object__object___FindEntry_2069b38
                    (*(int *)(param_1 + 0x14),param_2,
                     *(undefined4 *)
                      (*(int *)(*(int *)(**(int **)(_UNK_01084f20 + 0x1084f0c) + 0x10) + 0x60) +
                      0x78));
  return ~uVar1 >> 0x1f;
}

