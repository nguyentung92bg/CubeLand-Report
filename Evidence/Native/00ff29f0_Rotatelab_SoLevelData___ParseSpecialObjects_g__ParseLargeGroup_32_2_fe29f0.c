/* IL2CPP: Rotatelab.SoLevelData$$<ParseSpecialObjects>g__ParseLargeGroup|32_2
Rotatelab_LargeVoxelData_o* Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseLargeGroup_32_2 (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JToken_o* token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$<ParseSpecialObjects>g__ParseLargeGroup|32_2
   Rotatelab_LargeVoxelData_o* Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseLargeGroup_32_2
   (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JToken_o* token, const MethodInfo*
   method); */

int Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseLargeGroup_32_2_fe29f0
              (undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pcVar5 = (char *)(_UNK_00ff2bf0 + 0xff2a0c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff2bf4 + 0xff2a20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff2bf8 + 0xff2a2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff2bfc + 0xff2a38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff2c00 + 0xff2a44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff2c04 + 0xff2a50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff2c08 + 0xff2a5c));
    *pcVar5 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff2c0c + 0xff2a70));
  Rotatelab_LargeVoxelData___ctor_1070e30(iVar1,0);
  Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseBounds_32_0_fe2584(&uStack_30,param_1,param_2)
  ;
  if (iVar1 != 0) {
    *(undefined8 *)(iVar1 + 0xc) = uStack_30;
    *(undefined8 *)(iVar1 + 0x14) = uStack_28;
    *(undefined8 *)(iVar1 + 0x1c) = uStack_20;
    if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = (**(code **)(*param_2 + 0x130))
                      (param_2,**(undefined4 **)(_UNK_00ff2c10 + 0xff2ad0),
                       *(undefined4 *)(*param_2 + 0x134));
    if (*(int *)(**(int **)(_UNK_00ff2c14 + 0xff2af0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit_2ca434c(uVar2,0);
    *(undefined4 *)(iVar1 + 0x24) = uVar2;
    uVar2 = (**(code **)(*param_2 + 0x130))
                      (param_2,**(undefined4 **)(_UNK_00ff2c18 + 0xff2b24),
                       *(undefined4 *)(*param_2 + 0x134));
    uVar2 = Rotatelab_SoLevelData__ParseColor_fe23a8(uVar2,uVar2,0xd);
    *(undefined4 *)(iVar1 + 8) = uVar2;
    uVar2 = Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseHpTextData_32_1_fe26cc
                      (param_1,param_2);
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
    thunk_FUN_00ec5080();
    piVar3 = (int *)(**(code **)(*param_2 + 0x130))
                              (param_2,**(undefined4 **)(_UNK_00ff2c1c + 0xff2b70),
                               *(undefined4 *)(*param_2 + 0x134));
    piVar6 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_00ff2c20 + 0xff2b94) + 0xb8);
      if ((*(byte *)(*piVar3 + 0xb8) < uVar4) ||
         (piVar6 = piVar3,
         *(int *)(*(int *)(*piVar3 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_00ff2c20 + 0xff2b94))
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28();
      }
    }
    uVar2 = Rotatelab_SoLevelData__ParseVoxelPositions_fe2468(param_1,piVar6);
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
    thunk_FUN_00ec5080();
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

