/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntryContainer$$CreateEntry
void Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry (Rotatelab_Networking_UI_HiroRewardUIEntryContainer_o* __this, System_String_o* id, int32_t type, int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntryContainer$$CreateEntry
   void Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry
   (Rotatelab_Networking_UI_HiroRewardUIEntryContainer_o* __this, System_String_o* id, int32_t type,
   int64_t amount, const MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardUIEntryContainer__CreateEntry_ff08f4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  
  pcVar6 = (char *)(_UNK_01000b00 + 0x1000914);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000b04 + 0x1000928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000b08 + 0x1000934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000b0c + 0x1000940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000b10 + 0x100094c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01000b14 + 0x1000958));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x20) < *(int *)(*(int *)(param_1 + 0x1c) + 0xc)) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                       **(undefined4 **)(_UNK_01000b18 + 0x100099c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(**(int **)(_UNK_01000b1c + 0x10009f0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar3,uVar7,0,**(undefined4 **)(_UNK_01000b20 + 0x1000a18));
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(iVar2 + 8);
    uVar5 = *(uint *)(iVar2 + 0xc);
    piVar4 = *(int **)(_UNK_01000b24 + 0x1000a54);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar5 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar5 + 1;
      piVar4 = (int *)(iVar8 + uVar5 * 4 + 0x10);
      *piVar4 = iVar1;
      thunk_FUN_00ec5080(piVar4,iVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar2,iVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_Networking_UI_HiroRewardUIConfiguration__GetData_ff0108
                    (*(int *)(param_1 + 0x10),param_2,param_3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_UI_HiroRewardUIEntry__Initialize_ff0794(iVar1,uVar3,param_5,param_6);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

