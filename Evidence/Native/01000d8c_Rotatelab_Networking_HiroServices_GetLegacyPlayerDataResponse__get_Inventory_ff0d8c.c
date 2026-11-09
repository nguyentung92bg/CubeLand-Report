/* IL2CPP: Rotatelab.Networking.HiroServices.GetLegacyPlayerDataResponse$$get_Inventory
System_Collections_Generic_IDictionary_string__string__o* Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Inventory (Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroServices.GetLegacyPlayerDataResponse$$get_Inventory
   System_Collections_Generic_IDictionary_string__string__o*
   Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Inventory
   (Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse_o* __this, const MethodInfo*
   method); */

int Rotatelab_Networking_HiroServices_GetLegacyPlayerDataResponse__get_Inventory_ff0d8c(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01000e08 + 0x1000da0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000e0c + 0x1000db4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000e10 + 0x1000dc0));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01000e14 + 0x1000de0));
    System_Collections_Generic_Dictionary_object__object____ctor_206890c
              (iVar1,0,**(undefined4 **)(_UNK_01000e18 + 0x1000df8));
  }
  return iVar1;
}

