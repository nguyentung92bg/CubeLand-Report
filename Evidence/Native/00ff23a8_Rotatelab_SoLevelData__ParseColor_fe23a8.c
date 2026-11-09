/* IL2CPP: Rotatelab.SoLevelData$$ParseColor
int32_t Rotatelab_SoLevelData__ParseColor (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JToken_o* token, int32_t defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$ParseColor
   int32_t Rotatelab_SoLevelData__ParseColor (Rotatelab_SoLevelData_o* __this,
   Newtonsoft_Json_Linq_JToken_o* token, int32_t defaultValue, const MethodInfo* method); */

undefined4
Rotatelab_SoLevelData__ParseColor_fe23a8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_00ff2458 + 0xff23c4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff245c + 0xff23d8));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  if (param_2 != (int *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0xd8))(param_2,*(undefined4 *)(*param_2 + 0xdc));
    if (*(int *)(*(int *)(*(int *)(_UNK_00ff2460 + 0xff2414) + 0x4c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = System_Enum__TryParse_Int32Enum__1460f2c
                      (uVar1,1,&uStack_14,**(undefined4 **)(_UNK_00ff2464 + 0xff2438));
    if (iVar2 != 0) {
      param_3 = uStack_14;
    }
  }
  return param_3;
}

