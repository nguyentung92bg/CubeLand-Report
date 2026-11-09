/* IL2CPP: Rotatelab.SoLevelData$$<ParseSpecialObjects>g__ParseHpTextData|32_1
Rotatelab_HpTextData_array* Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseHpTextData_32_1 (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JToken_o* token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00ff2818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$<ParseSpecialObjects>g__ParseHpTextData|32_1
   Rotatelab_HpTextData_array* Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseHpTextData_32_1
   (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JToken_o* token, const MethodInfo*
   method); */

int * Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseHpTextData_32_1_fe26cc
                (undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_00ff29b4 + 0xff26e4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff29b8 + 0xff26f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff29bc + 0xff2704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff29c0 + 0xff2710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff29c4 + 0xff271c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff29c8 + 0xff2728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff29cc + 0xff2734));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff29d0 + 0xff2740));
    *pcVar8 = '\x01';
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)(**(code **)(*param_2 + 0x130))
                            (param_2,**(undefined4 **)(_UNK_00ff29d4 + 0xff2764),
                             *(undefined4 *)(*param_2 + 0x134));
  if (piVar1 != (int *)0x0) {
    uVar7 = (uint)*(byte *)(**(int **)(_UNK_00ff29d8 + 0xff2788) + 0xb8);
    if ((uVar7 <= *(byte *)(*piVar1 + 0xb8)) &&
       (*(int *)(*(int *)(*piVar1 + 100) + uVar7 * 4 + -4) == **(int **)(_UNK_00ff29d8 + 0xff2788)))
    goto LAB_00ff27e4;
  }
  piVar1 = (int *)thunk_FUN_00f00cdc();
  Newtonsoft_Json_Linq_JArray___ctor_2c97a38(piVar1,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
LAB_00ff27e4:
  uVar7 = 0;
  uVar2 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(piVar1,0);
  piVar3 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00ff29dc + 0xff2804),uVar2);
  piVar9 = piVar3 + 4;
  while( true ) {
    iVar4 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(piVar1,0);
    if (iVar4 <= (int)uVar7) {
      return piVar3;
    }
    piVar5 = (int *)Newtonsoft_Json_Linq_JArray__get_Item_2c98804(piVar1,uVar7,0);
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff29e0 + 0xff286c));
    Rotatelab_HpTextData___ctor_1070e28(iVar4,0);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = (**(code **)(*piVar5 + 0x130))
                       (piVar5,**(undefined4 **)(_UNK_00ff29e4 + 0xff2898),
                        *(undefined4 *)(*piVar5 + 0x134));
    Rotatelab_SoLevelData__ParseVector3_fe2d24
              (&uStack_30,(int)((ulonglong)uVar10 >> 0x20),(int)uVar10);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar4 + 0x10) = uStack_28;
    *(undefined8 *)(iVar4 + 8) = uStack_30;
    uVar10 = (**(code **)(*piVar5 + 0x130))
                       (piVar5,**(undefined4 **)(_UNK_00ff29e8 + 0xff28e0),
                        *(undefined4 *)(*piVar5 + 0x134));
    Rotatelab_SoLevelData__ParseVector3_fe2d24
              (&uStack_40,(int)((ulonglong)uVar10 >> 0x20),(int)uVar10);
    *(undefined4 *)(iVar4 + 0x1c) = uStack_38;
    *(undefined8 *)(iVar4 + 0x14) = uStack_40;
    uVar10 = (**(code **)(*piVar5 + 0x130))
                       (piVar5,**(undefined4 **)(_UNK_00ff29ec + 0xff291c),
                        *(undefined4 *)(*piVar5 + 0x134));
    Rotatelab_SoLevelData__ParseVector3_fe2d24
              (&uStack_50,(int)((ulonglong)uVar10 >> 0x20),(int)uVar10);
    *(undefined4 *)(iVar4 + 0x28) = uStack_48;
    *(undefined8 *)(iVar4 + 0x20) = uStack_50;
    if (piVar3 == (int *)0x0) break;
    iVar6 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20));
    if (iVar6 == 0) {
      uVar2 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar2,0);
    }
    if ((uint)piVar3[3] <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *piVar9 = iVar4;
    thunk_FUN_00ec5080(piVar9,iVar4);
    uVar7 = uVar7 + 1;
    piVar9 = piVar9 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

