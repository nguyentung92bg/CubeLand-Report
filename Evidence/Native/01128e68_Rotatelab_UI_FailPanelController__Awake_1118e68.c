/* IL2CPP: Rotatelab.UI.FailPanelController$$Awake
void Rotatelab_UI_FailPanelController__Awake (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$Awake
   void Rotatelab_UI_FailPanelController__Awake (Rotatelab_UI_FailPanelController_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_FailPanelController__Awake_1118e68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_011290ac + 0x1128e7c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290b0 + 0x1128e90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290b4 + 0x1128e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290b8 + 0x1128ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290bc + 0x1128eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290c0 + 0x1128ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290c4 + 0x1128ecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290c8 + 0x1128ed8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290cc + 0x1128ee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290d0 + 0x1128ef0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011290d4 + 0x1128efc));
    *pcVar3 = '\x01';
  }
  piVar7 = *(int **)(_UNK_011290d8 + 0x1128f10);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar9 = *(undefined4 **)(_UNK_011290dc + 0x1128f34);
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x7c);
  uVar2 = thunk_FUN_00f00cdc(*puVar9);
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_011290e0 + 0x1128f54),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x7c) = uVar2;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xec);
  uVar2 = thunk_FUN_00f00cdc(*puVar9);
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_011290e4 + 0x1128fac),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xec) = uVar2;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xe0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011290e8 + 0x1128fec));
  System_Action_object____ctor_1f11414(uVar2,param_1,**(undefined4 **)(_UNK_011290ec + 0x112900c),0)
  ;
  uVar2 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar4,uVar2,**(undefined4 **)(_UNK_011290f0 + 0x1129024));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xe0) = uVar2;
  thunk_FUN_00ec5080();
  if (*(int *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0x48);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011290f4 + 0x112905c));
  UnityEngine_Events_UnityAction_Vector2____ctor_1c60160
            (uVar2,param_1,**(undefined4 **)(_UNK_011290f8 + 0x112907c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Events_UnityEvent_Vector2___GetDelegate_1c63028
                    (uVar2,*(undefined4 *)
                            (*(int *)(*(int *)(**(int **)(_UNK_011290fc + 0x11290a0) + 0x10) + 0x60)
                            + 8),**(int **)(_UNK_011290fc + 0x11290a0),uVar2,unaff_r4,unaff_r5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc),uVar2,0);
    *pcVar3 = '\x01';
  }
  iVar6 = *(int *)(iVar1 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar6 + 8);
  uVar5 = *(uint *)(iVar6 + 0xc);
  piVar7 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar5 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar5 + 1;
    puVar9 = (undefined4 *)(iVar8 + uVar5 * 4 + 0x10);
    *puVar9 = uVar2;
    thunk_FUN_00ec5080(puVar9,uVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar6,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar1 + 0x14) = 1;
  return;
}

