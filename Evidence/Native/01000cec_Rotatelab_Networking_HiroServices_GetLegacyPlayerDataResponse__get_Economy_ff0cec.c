/* IL2CPP: Rotatelab.Networking.HiroServices.GetLegacyPlayerDataResponse$$get_Economy
System_Collections_Generic_IDictionary_string__string__o* Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Economy (Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroServices.GetLegacyPlayerDataResponse$$get_Economy
   System_Collections_Generic_IDictionary_string__string__o*
   Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Economy
   (Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse_o* __this, const MethodInfo*
   method); */

int Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Economy_ff0cec(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01000d68 + 0x1000d00);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000d6c + 0x1000d14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000d70 + 0x1000d20));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01000d74 + 0x1000d40));
    System_Collections_Generic_Dictionary_object__object____ctor_206890c
              (iVar1,0,**(undefined4 **)(_UNK_01000d78 + 0x1000d58));
  }
  return iVar1;
}

