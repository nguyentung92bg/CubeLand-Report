/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$get_GetPreviousSeasonName
System_String_o* Rotatelab_SeasonPass_SeasonPassController__get_GetPreviousSeasonName (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$get_GetPreviousSeasonName
   System_String_o* Rotatelab_SeasonPass_SeasonPassController__get_GetPreviousSeasonName
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__get_GetPreviousSeasonName_10a2950(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_010b2a34 + 0x10b2968);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2a38 + 0x10b297c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b2a3c + 0x10b2988));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x20);
  if (*(int *)(**(int **)(_UNK_010b2a40 + 0x10b29b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_18,0);
  iVar1 = System_DateTime__get_Month_2b4a0bc(&uStack_18,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___get_Item_267d814
            (iVar2,(iVar1 + 10) % 0xc,**(undefined4 **)(_UNK_010b2a44 + 0x10b2a14));
  return;
}

