/* IL2CPP: Rotatelab.SoLevelData$$ParseVoxelPositions
UnityEngine_Vector3Int_array* Rotatelab_SoLevelData__ParseVoxelPositions (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JArray_o* array, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$ParseVoxelPositions
   UnityEngine_Vector3Int_array* Rotatelab_SoLevelData__ParseVoxelPositions
   (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JArray_o* array, const MethodInfo*
   method); */

int Rotatelab_SoLevelData__ParseVoxelPositions_fe2468(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_00ff2578 + 0xff2480);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff257c + 0xff2494));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = 0;
  uVar1 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(param_2,0);
  iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_00ff2580 + 0xff24c8),uVar1);
  puVar5 = (undefined4 *)(iVar2 + 0x10);
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(param_2,0);
    if (iVar3 <= (int)uVar6) {
      return iVar2;
    }
    uVar7 = Newtonsoft_Json_Linq_JArray__get_Item_2c98804(param_2,uVar6,0);
    Rotatelab_SoLevelData__ParseVector3Int_fe3ee4
              (&uStack_30,(int)((ulonglong)uVar7 >> 0x20),(int)uVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar6) break;
    *puVar5 = uStack_30;
    puVar5[1] = uStack_2c;
    uVar6 = uVar6 + 1;
    puVar5[2] = uStack_28;
    puVar5 = puVar5 + 3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

