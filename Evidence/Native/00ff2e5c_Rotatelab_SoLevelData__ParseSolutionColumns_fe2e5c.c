/* IL2CPP: Rotatelab.SoLevelData$$ParseSolutionColumns
System_Int32_array* Rotatelab_SoLevelData__ParseSolutionColumns (Newtonsoft_Json_Linq_JArray_o* root, int32_t columnCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$ParseSolutionColumns
   System_Int32_array* Rotatelab_SoLevelData__ParseSolutionColumns (Newtonsoft_Json_Linq_JArray_o*
   root, int32_t columnCount, const MethodInfo* method); */

int Rotatelab_SoLevelData__ParseSolutionColumns_fe2e5c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  
  pcVar6 = (char *)(_UNK_00ff309c + 0xff2e78);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff30a0 + 0xff2e8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff30a4 + 0xff2e98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff30a8 + 0xff2ea4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff30ac + 0xff2eb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff30b0 + 0xff2ebc));
    *pcVar6 = '\x01';
  }
  if (param_1 == 0) {
LAB_00ff3028:
    iVar3 = **(int **)(_UNK_00ff30b4 + 0xff3034);
    iVar2 = *(int *)(iVar3 + 0x1c);
    if (iVar2 == 0) {
      FUN_00efd7c4(iVar3);
      iVar2 = *(int *)(iVar3 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
  }
  else {
    uVar7 = 0;
    uVar1 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(param_1,0);
    iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_00ff30b8 + 0xff2eec),uVar1);
    iVar3 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(param_1,0);
    if (0 < iVar3) {
      piVar8 = *(int **)(_UNK_00ff30bc + 0xff2f14);
      do {
        uVar1 = Newtonsoft_Json_Linq_JArray__get_Item_2c98804(param_1,uVar7,0);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iStack_28 = Newtonsoft_Json_Linq_JToken__op_Explicit_2ca434c(uVar1,0);
        if ((iStack_28 < 0) || (param_2 <= iStack_28)) {
          iVar2 = *(int *)(_UNK_00ff30c0 + 0xff2fa8);
          uStack_24 = uVar7;
          uVar1 = FUN_00ec393c(*(undefined4 *)(iVar2 + 0x24),&uStack_24);
          uVar4 = FUN_00ec393c(*(undefined4 *)(iVar2 + 0x24),&iStack_28);
          iStack_2c = param_2;
          uVar5 = FUN_00ec393c(*(undefined4 *)(iVar2 + 0x24),&iStack_2c);
          uVar1 = System_String__Format_2a0c2b4
                            (**(undefined4 **)(_UNK_00ff30c4 + 0xff2ff0),uVar1,uVar4,uVar5,0);
          if (*(int *)(**(int **)(_UNK_00ff30c8 + 0xff300c) + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Debug__LogWarning_35b0090(uVar1,0);
          goto LAB_00ff3028;
        }
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(int *)(iVar2 + uVar7 * 4 + 0x10) = iStack_28;
        iVar3 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(param_1,0);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar3);
    }
  }
  return iVar2;
}

