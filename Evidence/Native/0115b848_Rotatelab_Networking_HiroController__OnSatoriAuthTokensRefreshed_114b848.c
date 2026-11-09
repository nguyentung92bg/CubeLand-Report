/* IL2CPP: Rotatelab.Networking.HiroController$$OnSatoriAuthTokensRefreshed
void Rotatelab_Networking_HiroController__OnSatoriAuthTokensRefreshed (Rotatelab_Networking_HiroController_o* __this, Satori_ISession_o* session, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$OnSatoriAuthTokensRefreshed
   void Rotatelab_Networking_HiroController__OnSatoriAuthTokensRefreshed
   (Rotatelab_Networking_HiroController_o* __this, Satori_ISession_o* session, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__OnSatoriAuthTokensRefreshed_114b848
               (int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  
  pcVar8 = (char *)(_UNK_0115b9b8 + 0x115b860);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b9bc + 0x115b874));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b9c0 + 0x115b880));
    *pcVar8 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x3c);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_2;
  piVar10 = *(int **)(_UNK_0115b9c4 + 0x115b8a8);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar5 = *piVar10;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar5) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_0115b8f0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,iVar5,0);
LAB_0115b8f0:
  uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar2 = *(undefined4 **)(_UNK_0115b9c8 + 0x115b924);
  Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8(iVar9,uVar3,*puVar2);
  iVar9 = *param_2;
  iVar1 = *piVar10;
  iVar5 = *(int *)(param_1 + 0x40);
  uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar1) {
        puVar4 = (undefined4 *)(iVar9 + *piVar10 * 8 + 200);
        goto LAB_0115b97c;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(param_2,iVar1,1);
LAB_0115b97c:
  uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8(iVar5,uVar3,*puVar2);
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

