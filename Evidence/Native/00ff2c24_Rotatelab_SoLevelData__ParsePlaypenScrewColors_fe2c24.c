/* IL2CPP: Rotatelab.SoLevelData$$ParsePlaypenScrewColors
Rotatelab_Scripts_ColorType_array* Rotatelab_SoLevelData__ParsePlaypenScrewColors (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JArray_o* array, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$ParsePlaypenScrewColors
   Rotatelab_Scripts_ColorType_array* Rotatelab_SoLevelData__ParsePlaypenScrewColors
   (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JArray_o* array, const MethodInfo*
   method); */

int Rotatelab_SoLevelData__ParsePlaypenScrewColors_fe2c24(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  pcVar4 = (char *)(_UNK_00ff2d18 + 0xff2c38);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff2d1c + 0xff2c4c));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = 0;
  uVar1 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(param_2,0);
  iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_00ff2d20 + 0xff2c80),uVar1);
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(param_2,0);
    if (iVar3 <= (int)uVar5) {
      return iVar2;
    }
    uVar1 = Newtonsoft_Json_Linq_JArray__get_Item_2c98804(param_2,uVar5,0);
    uVar1 = Rotatelab_SoLevelData__ParseColor_fe23a8(uVar1,uVar1,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar5) break;
    iVar3 = uVar5 * 4;
    uVar5 = uVar5 + 1;
    *(undefined4 *)(iVar2 + iVar3 + 0x10) = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

