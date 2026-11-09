/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntryContainer$$CreateEntry
void Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry (Rotatelab_Networking_UI_HiroRewardUIEntryContainer_o* __this, System_String_o* id, int32_t type, System_String_o* amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntryContainer$$CreateEntry
   void Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry
   (Rotatelab_Networking_UI_HiroRewardUIEntryContainer_o* __this, System_String_o* id, int32_t type,
   System_String_o* amount, const MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry_ff0858
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010008e8 + 0x1000878);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010008ec + 0x1000890));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010008f0 + 0x10008a4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  System_Int64__Parse_2b6dbbc(param_4,uVar1,0);
  Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry_ff08f4(param_1,param_2,param_3);
  return;
}

