/* IL2CPP: Rotatelab.SoLevelData$$ParseVector3Int
UnityEngine_Vector3Int_o Rotatelab_SoLevelData__ParseVector3Int (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JToken_o* token, UnityEngine_Vector3Int_o defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$ParseVector3Int
   UnityEngine_Vector3Int_o Rotatelab_SoLevelData__ParseVector3Int (Rotatelab_SoLevelData_o* __this,
   Newtonsoft_Json_Linq_JToken_o* token, UnityEngine_Vector3Int_o defaultValue, const MethodInfo*
   method); */

void Rotatelab_SoLevelData__ParseVector3Int_fe3ee4
               (undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_00ff400c + 0xff3f00);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff4010 + 0xff3f14));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(_UNK_00ff4014 + 0xff3f2c);
  uStack_1c = 0;
  uVar1 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x24),&uStack_1c);
  if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = (**(code **)(*param_3 + 0x130))(param_3,uVar1,*(undefined4 *)(*param_3 + 0x134));
  if (*(int *)(**(int **)(_UNK_00ff4018 + 0xff3f70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Newtonsoft_Json_Linq_JToken__op_Explicit_2ca434c(uVar1,0);
  uStack_20 = 1;
  uVar2 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x24),&uStack_20);
  uVar2 = (**(code **)(*param_3 + 0x130))(param_3,uVar2,*(undefined4 *)(*param_3 + 0x134));
  uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit_2ca434c(uVar2,0);
  uStack_24 = 2;
  uVar3 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x24),&uStack_24);
  uVar3 = (**(code **)(*param_3 + 0x130))(param_3,uVar3,*(undefined4 *)(*param_3 + 0x134));
  uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit_2ca434c(uVar3,0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}

