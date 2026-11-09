/* IL2CPP: Rotatelab.CustomRotateEventsController.<>c$$<ReportToAxon>b__84_1
System_String_o* Rotatelab_CustomRotateEventsController___c___ReportToAxon_b__84_1 (Rotatelab_CustomRotateEventsController___c_o* __this, System_Collections_Generic_KeyValuePair_string__object__o p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController.<>c$$<ReportToAxon>b__84_1
   System_String_o* Rotatelab_CustomRotateEventsController___c___ReportToAxon_b__84_1
   (Rotatelab_CustomRotateEventsController___c_o* __this,
   System_Collections_Generic_KeyValuePair_string__object__o p, const MethodInfo* method); */

undefined4
Rotatelab_CustomRotateEventsController___c___ReportToAxon_b__84_1_fd69dc
          (undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_00fe6a7c + 0xfe69f0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6a80 + 0xfe6a04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6a84 + 0xfe6a10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6a88 + 0xfe6a1c));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fe6a8c + 0xfe6a30) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  if (*(int *)(**(int **)(_UNK_00fe6a90 + 0xfe6a58) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_02b305b0 + 0x2b3043c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02b305b4 + 0x2b30450),uVar1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_02b305b8 + 0x2b3045c));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(_UNK_02b305bc + 0x2b30474);
  piVar2 = (int *)thunk_FUN_00f00bc8(param_3,*piVar8);
  if (piVar2 == (int *)0x0) {
    piVar8 = *(int **)(_UNK_02b305c0 + 0x2b304d8);
    piVar2 = (int *)thunk_FUN_00f00bc8(param_3,*piVar8);
    if (piVar2 == (int *)0x0) {
      if (param_3 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02b3056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*param_3 + 0xd8))(param_3,*(undefined4 *)(*param_3 + 0xdc));
        return uVar1;
      }
      return **(undefined4 **)(*(int *)(*(int *)(_UNK_02b305c4 + 0x2b305a4) + 0x48) + 0x5c);
    }
    iVar3 = *piVar2;
    iVar5 = *piVar8;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar5) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_02b3057c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar2,iVar5,0);
LAB_02b3057c:
                    /* WARNING: Could not recover jumptable at 0x02b30594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*puVar4)(piVar2,0,uVar1,puVar4[1]);
    return uVar1;
  }
  iVar3 = *piVar2;
  iVar5 = *piVar8;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar5) {
        puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0x138);
        goto LAB_02b30538;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar2,iVar5,0xf);
LAB_02b30538:
                    /* WARNING: Could not recover jumptable at 0x02b3054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*puVar4)(piVar2,uVar1,puVar4[1]);
  return uVar1;
}

