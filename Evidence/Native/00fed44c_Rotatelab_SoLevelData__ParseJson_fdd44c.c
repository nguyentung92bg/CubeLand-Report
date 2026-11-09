/* IL2CPP: Rotatelab.SoLevelData$$ParseJson
Rotatelab_SoLevelData_o* Rotatelab_SoLevelData__ParseJson (Rotatelab_SoLevelData_o* __this, System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$ParseJson
   Rotatelab_SoLevelData_o* Rotatelab_SoLevelData__ParseJson (Rotatelab_SoLevelData_o* __this,
   System_String_o* json, const MethodInfo* method); */

int Rotatelab_SoLevelData__ParseJson_fdd44c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  
  pcVar7 = (char *)(_UNK_00fed700 + 0xfed464);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed704 + 0xfed478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed708 + 0xfed484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed70c + 0xfed490));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed710 + 0xfed49c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed714 + 0xfed4a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed718 + 0xfed4b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed71c + 0xfed4c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed720 + 0xfed4cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fed724 + 0xfed4d8));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar1 = Newtonsoft_Json_Linq_JObject__Parse_2c9e0b4(param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Newtonsoft_Json_Linq_JObject__get_Item_2c9dc5c
                            (iVar1,**(undefined4 **)(_UNK_00fed728 + 0xfed510),0);
  if (piVar2 != (int *)0x0) {
    uVar8 = (**(code **)(*piVar2 + 0x130))
                      (piVar2,**(undefined4 **)(_UNK_00fed72c + 0xfed530),
                       *(undefined4 *)(*piVar2 + 0x134));
  }
  if (*(int *)(**(int **)(_UNK_00fed730 + 0xfed54c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit_2ca7130(uVar8,0);
  iVar5 = **(int **)(_UNK_00fed734 + 0xfed578);
  if (iVar3 != 0) {
    iVar5 = iVar3;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(param_1 + 0x10) = iVar5;
  thunk_FUN_00ec5080((int *)(param_1 + 0x10),iVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)Newtonsoft_Json_Linq_JObject__get_Item_2c9dc5c
                            (iVar1,**(undefined4 **)(_UNK_00fed738 + 0xfed5b8),0);
  piVar9 = *(int **)(_UNK_00fed73c + 0xfed5d0);
  piVar2 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    iVar5 = *piVar9;
    uVar6 = (uint)*(byte *)(iVar5 + 0xb8);
    if ((uVar6 <= *(byte *)(*piVar4 + 0xb8)) &&
       (piVar2 = piVar4, *(int *)(*(int *)(*piVar4 + 100) + uVar6 * 4 + -4) != iVar5)) {
      piVar2 = (int *)0x0;
    }
  }
  Rotatelab_SoLevelData__ParseLayerData_fdd74c(param_1,piVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Newtonsoft_Json_Linq_JObject__get_Item_2c9dc5c
                            (iVar1,**(undefined4 **)(_UNK_00fed740 + 0xfed628),0);
  iVar5 = *piVar9;
  if (piVar2 != (int *)0x0) {
    uVar6 = (uint)*(byte *)(iVar5 + 0xb8);
    if ((uVar6 <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar2 + 100) + uVar6 * 4 + -4) == iVar5)) goto LAB_00fed678;
  }
  piVar2 = (int *)thunk_FUN_00f00cdc();
  Newtonsoft_Json_Linq_JArray___ctor_2c97a38(piVar2,0);
LAB_00fed678:
  Rotatelab_SoLevelData__ParseSpecialObjects_fddd8c(param_1,piVar2);
  if (iVar1 != 0) {
    piVar4 = (int *)Newtonsoft_Json_Linq_JObject__get_Item_2c9dc5c
                              (iVar1,**(undefined4 **)(_UNK_00fed744 + 0xfed6a4),0);
    piVar2 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
      uVar6 = (uint)*(byte *)(**(int **)(_UNK_00fed748 + 0xfed6c0) + 0xb8);
      if ((uVar6 <= *(byte *)(*piVar4 + 0xb8)) &&
         (piVar2 = piVar4,
         *(int *)(*(int *)(*piVar4 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_00fed748 + 0xfed6c0))
         ) {
        piVar2 = (int *)0x0;
      }
    }
    Rotatelab_SoLevelData__ParseBlasterData_fe0b14(param_1,piVar2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

