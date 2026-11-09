/* IL2CPP: Rotatelab.Networking.HiroServices.GetLegacyPlayerDataResponse$$get_Stats
System_Collections_Generic_IDictionary_string__string__o* Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Stats (Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroServices.GetLegacyPlayerDataResponse$$get_Stats
   System_Collections_Generic_IDictionary_string__string__o*
   Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Stats
   (Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse_o* __this, const MethodInfo*
   method); */

int Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Stats_ff0e2c(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01000ea8 + 0x1000e40);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000eac + 0x1000e54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000eb0 + 0x1000e60));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01000eb4 + 0x1000e80));
    System_Collections_Generic_Dictionary_object__object____ctor_206890c
              (iVar1,0,**(undefined4 **)(_UNK_01000eb8 + 0x1000e98));
  }
  return iVar1;
}

