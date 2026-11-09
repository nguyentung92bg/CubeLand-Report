/* IL2CPP: Rotatelab.Networking.HiroController$$OnNakamaAuthTokensRefreshed
void Rotatelab_Networking_HiroController__OnNakamaAuthTokensRefreshed (Rotatelab_Networking_HiroController_o* __this, Nakama_ISession_o* session, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$OnNakamaAuthTokensRefreshed
   void Rotatelab_Networking_HiroController__OnNakamaAuthTokensRefreshed
   (Rotatelab_Networking_HiroController_o* __this, Nakama_ISession_o* session, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__OnNakamaAuthTokensRefreshed_114abec
               (int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_0115ade0 + 0x115ac08);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115ade4 + 0x115ac1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115ade8 + 0x115ac28));
    *pcVar7 = '\x01';
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_2;
  piVar9 = *(int **)(_UNK_0115adec + 0x115ac4c);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar9) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xf8);
        goto LAB_0115ac94;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar9,7);
LAB_0115ac94:
  uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
  Rotatelab_Networking_HiroController__SetUserIDAsync_114adf4(&uStack_28,param_1,uVar3);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget_321de88(uStack_28,uStack_24,0);
  iVar1 = *param_2;
  iVar8 = *(int *)(param_1 + 0x34);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar9) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_0115ad14;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,*piVar9,0);
LAB_0115ad14:
  uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar2 = *(undefined4 **)(_UNK_0115adf0 + 0x115ad48);
  Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8(iVar8,uVar3,*puVar2);
  iVar1 = *param_2;
  iVar8 = *(int *)(param_1 + 0x38);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar9) {
        puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xe8);
        goto LAB_0115ada0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(param_2,*piVar9,5);
LAB_0115ada0:
  uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8(iVar8,uVar3,*puVar2);
  if (*(code **)(_UNK_03607988 + 0x360795c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03607960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_UNK_03607988 + 0x360795c))();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_0360798c + 0x3607974);
  *(code **)(_UNK_03607990 + 0x3607980) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x03607984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

