/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntryContainer$$.ctor
void Rotatelab_Networking_UI_HiroRewardUIEntryContainer___ctor (Rotatelab_Networking_UI_HiroRewardUIEntryContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntryContainer$$.ctor
   void Rotatelab_Networking_UI_HiroRewardUIEntryContainer___ctor
   (Rotatelab_Networking_UI_HiroRewardUIEntryContainer_o* __this, const MethodInfo* method); */

int Rotatelab_Networking_UI_HiroRewardUIEntryContainer___ctor_ff0b28(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01000bb0 + 0x1000b3c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000bb4 + 0x1000b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000bb8 + 0x1000b5c));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01000bbc + 0x1000b70));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,4,**(undefined4 **)(_UNK_01000bc0 + 0x1000b88));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

