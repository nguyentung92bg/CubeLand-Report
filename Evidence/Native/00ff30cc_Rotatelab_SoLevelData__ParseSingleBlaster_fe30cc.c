/* IL2CPP: Rotatelab.SoLevelData$$ParseSingleBlaster
Rotatelab_BlasterData_o* Rotatelab_SoLevelData__ParseSingleBlaster (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JObject_o* entry, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00ff3cf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.SoLevelData$$ParseSingleBlaster
   Rotatelab_BlasterData_o* Rotatelab_SoLevelData__ParseSingleBlaster (Rotatelab_SoLevelData_o*
   __this, Newtonsoft_Json_Linq_JObject_o* entry, const MethodInfo* method); */

int Rotatelab_SoLevelData__ParseSingleBlaster_fe30cc(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uStack_30;
  int **ppiStack_2c;
  int *piStack_28;
  
  pcVar8 = (char *)(_UNK_00ff3da8 + 0xff30e8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dac + 0xff30fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3db0 + 0xff3108));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3db4 + 0xff3114));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3db8 + 0xff3120));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dbc + 0xff312c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dc0 + 0xff3138));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dc4 + 0xff3144));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dc8 + 0xff3150));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dcc + 0xff315c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dd0 + 0xff3168));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dd4 + 0xff3174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dd8 + 0xff3180));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3ddc + 0xff318c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3de0 + 0xff3198));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3de4 + 0xff31a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3de8 + 0xff31b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dec + 0xff31bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3df0 + 0xff31c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3df4 + 0xff31d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3df8 + 0xff31e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3dfc + 0xff31ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e00 + 0xff31f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e04 + 0xff3204));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e08 + 0xff3210));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e0c + 0xff321c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e10 + 0xff3228));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e14 + 0xff3234));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e18 + 0xff3240));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e1c + 0xff324c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e20 + 0xff3258));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e24 + 0xff3264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e28 + 0xff3270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e2c + 0xff327c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e30 + 0xff3288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e34 + 0xff3294));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e38 + 0xff32a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e3c + 0xff32ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e40 + 0xff32b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e44 + 0xff32c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff3e48 + 0xff32d0));
    *pcVar8 = '\x01';
  }
  piStack_28 = (int *)0x0;
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff3e4c + 0xff32e8));
  Rotatelab_BlasterData___ctor_1070e88(iVar3,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Newtonsoft_Json_Linq_JObject__get_Item_2c9dc5c
                    (param_2,**(undefined4 **)(_UNK_00ff3e50 + 0xff3318),0);
  if (*(int *)(**(int **)(_UNK_00ff3e54 + 0xff3330) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit_2ca434c(uVar4,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar3 + 8) = uVar4;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Newtonsoft_Json_Linq_JObject__get_Item_2c9dc5c
                    (param_2,**(undefined4 **)(_UNK_00ff3e5c + 0xff3378),0);
  uVar4 = Rotatelab_SoLevelData__ParseColor_fe23a8(uVar4,uVar4,0);
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  uVar4 = Newtonsoft_Json_Linq_JObject__get_Item_2c9dc5c
                    (param_2,**(undefined4 **)(_UNK_00ff3e60 + 0xff33d4),0);
  uVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit_2ca434c(uVar4,0);
  puVar12 = *(undefined4 **)(_UNK_00ff3e64 + 0xff33f0);
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  uVar4 = thunk_FUN_00f00cdc(*puVar12);
  puVar10 = *(undefined4 **)(_UNK_00ff3e68 + 0xff340c);
  System_Collections_Generic_List_object____ctor_267d274(uVar4,*puVar10);
  *(undefined4 *)(iVar3 + 0x34) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x34),uVar4);
  uVar4 = thunk_FUN_00f00cdc(*puVar12);
  System_Collections_Generic_List_object____ctor_267d274(uVar4,*puVar10);
  *(undefined4 *)(iVar3 + 0x38) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x38),uVar4);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)Newtonsoft_Json_Linq_JObject__get_Item_2c9dc5c
                            (param_2,**(undefined4 **)(_UNK_00ff3e6c + 0xff3460),0);
  if (piVar5 == (int *)0x0) goto LAB_00ff39b8;
  piVar13 = *(int **)(_UNK_00ff3e70 + 0xff3480);
  uVar4 = **(undefined4 **)(_UNK_00ff3e74 + 0xff3498);
  iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
  uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
  if ((uVar1 < 0x100) || (uVar4 = 1, (uVar1 & 0xff) == 0)) {
    uVar4 = **(undefined4 **)(_UNK_00ff3e78 + 0xff34e8);
    iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
    uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
    if ((0xff < uVar1) && (uVar4 = 2, (uVar1 & 0xff) != 0)) goto LAB_00ff36fc;
    uVar4 = **(undefined4 **)(_UNK_00ff3e7c + 0xff3538);
    iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
    uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
    if ((0xff < uVar1) && (uVar4 = 3, (uVar1 & 0xff) != 0)) goto LAB_00ff36fc;
    uVar4 = **(undefined4 **)(_UNK_00ff3e80 + 0xff3588);
    iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
    uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
    if ((0xff < uVar1) && (uVar4 = 5, (uVar1 & 0xff) != 0)) goto LAB_00ff36fc;
    uVar4 = **(undefined4 **)(_UNK_00ff3e84 + 0xff35d8);
    iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
    uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
    if ((0xff < uVar1) && (uVar4 = 4, (uVar1 & 0xff) != 0)) goto LAB_00ff36fc;
    uVar4 = **(undefined4 **)(_UNK_00ff3e88 + 0xff3628);
    iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
    uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
    if ((0xff < uVar1) && (uVar4 = 6, (uVar1 & 0xff) != 0)) goto LAB_00ff36fc;
    uVar4 = **(undefined4 **)(_UNK_00ff3e8c + 0xff3678);
    iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
    uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
    if ((0xff < uVar1) && (uVar4 = 7, (uVar1 & 0xff) != 0)) goto LAB_00ff36fc;
    uVar4 = **(undefined4 **)(_UNK_00ff3e90 + 0xff36c8);
    iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
    uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
    if ((0xff < uVar1) && (uVar4 = 8, (uVar1 & 0xff) != 0)) goto LAB_00ff36fc;
    uVar4 = **(undefined4 **)(_UNK_00ff3e94 + 0xff3d28);
    iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
    uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
    if ((0xff < uVar1) && ((uVar1 & 0xff) != 0)) {
      *(undefined4 *)(iVar3 + 0xc) = 9;
    }
  }
  else {
LAB_00ff36fc:
    *(undefined4 *)(iVar3 + 0xc) = uVar4;
  }
  uVar4 = **(undefined4 **)(_UNK_00ff3e98 + 0xff371c);
  iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar13 + 0x2c) * 8 + 0xc4));
  uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
  piVar14 = *(int **)(_UNK_00ff3e9c + 0xff3754);
  *(bool *)(iVar3 + 0x1c) = 0xff < uVar1;
  uVar4 = **(undefined4 **)(_UNK_00ff3ea0 + 0xff3770);
  iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(*piVar14 + 0x2c) * 8 + 0xc4));
  (**(code **)(iVar6 + 4))(&uStack_30,piVar5,uVar4,iVar6);
  *(int ***)(iVar3 + 0x20) = ppiStack_2c;
  uVar4 = (**(code **)(*piVar5 + 0x130))
                    (piVar5,**(undefined4 **)(_UNK_00ff3ea4 + 0xff37a8),
                     *(undefined4 *)(*piVar5 + 0x134));
  uVar4 = Rotatelab_SoLevelData__ParseColor_fe23a8(uVar4,uVar4,0);
  uVar9 = **(undefined4 **)(_UNK_00ff3ea8 + 0xff37d4);
  uVar1 = *(ushort *)(*piVar13 + 0x2c);
  *(undefined4 *)(iVar3 + 0x14) = uVar4;
  iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)uVar1 * 8 + 0xc4));
  uVar2 = (**(code **)(iVar6 + 4))(piVar5,uVar9,iVar6);
  uVar4 = **(undefined4 **)(_UNK_00ff3eac + 0xff3820);
  uVar1 = *(ushort *)(*piVar13 + 0x2c);
  *(bool *)(iVar3 + 0x24) = 0xff < uVar2;
  iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)uVar1 * 8 + 0xc4));
  uVar2 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
  uVar4 = **(undefined4 **)(_UNK_00ff3eb0 + 0xff386c);
  uVar1 = *(ushort *)(*piVar13 + 0x2c);
  *(bool *)(iVar3 + 0x25) = 0xff < uVar2;
  iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)uVar1 * 8 + 0xc4));
  uVar2 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
  uVar4 = **(undefined4 **)(_UNK_00ff3eb4 + 0xff38b8);
  uVar1 = *(ushort *)(*piVar13 + 0x2c);
  *(bool *)(iVar3 + 0x26) = 0xff < uVar2;
  iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)uVar1 * 8 + 0xc4));
  uVar2 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
  uVar1 = *(ushort *)(*piVar13 + 0x2c);
  *(bool *)(iVar3 + 0x27) = 0xff < uVar2;
  uVar4 = **(undefined4 **)(_UNK_00ff3eb8 + 0xff3914);
  iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)uVar1 * 8 + 0xc4));
  uVar1 = (**(code **)(iVar6 + 4))(piVar5,uVar4,iVar6);
  iVar6 = *piVar14;
  *(bool *)(iVar3 + 0x28) = 0xff < uVar1;
  uVar4 = **(undefined4 **)(_UNK_00ff3ebc + 0xff3960);
  iVar6 = FUN_00ec3930(*(undefined4 *)(*piVar5 + (uint)*(ushort *)(iVar6 + 0x2c) * 8 + 0xc4));
  (**(code **)(iVar6 + 4))(&uStack_30,piVar5,uVar4,iVar6);
  *(int ***)(iVar3 + 0x2c) = ppiStack_2c;
  uVar4 = (**(code **)(*piVar5 + 0x130))
                    (piVar5,**(undefined4 **)(_UNK_00ff3ec0 + 0xff3998),
                     *(undefined4 *)(*piVar5 + 0x134));
  uVar4 = Rotatelab_SoLevelData__ParseColor_fe23a8(uVar4,uVar4,0);
  *(undefined4 *)(iVar3 + 0x30) = uVar4;
LAB_00ff39b8:
  if (*(int *)(iVar3 + 0xc) == 4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar5 = (int *)Newtonsoft_Json_Linq_JObject__get_Item_2c9dc5c
                              (param_2,**(undefined4 **)(_UNK_00ff3ec4 + 0xff39e0),0);
    if (piVar5 != (int *)0x0) {
      uVar7 = (uint)*(byte *)(**(int **)(_UNK_00ff3ec8 + 0xff3a00) + 0xb8);
      if ((uVar7 <= *(byte *)(*piVar5 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar5 + 100) + uVar7 * 4 + -4) == **(int **)(_UNK_00ff3ec8 + 0xff3a00)
         )) {
        uVar4 = Newtonsoft_Json_Linq_JContainer__get_Count_2c9bb64(piVar5,0);
        iVar6 = thunk_FUN_00f00cdc(*puVar12);
        System_Collections_Generic_List_object____ctor_267d2e8
                  (iVar6,uVar4,**(undefined4 **)(_UNK_00ff3ecc + 0xff3a58));
        piVar13 = (int *)(iVar3 + 0x3c);
        *piVar13 = iVar6;
        thunk_FUN_00ec5080(piVar13,iVar6);
        piStack_28 = (int *)Newtonsoft_Json_Linq_JArray__GetEnumerator_2c988e0(piVar5,0);
        ppiStack_2c = &piStack_28;
        uStack_30 = 0;
        do {
          piVar5 = piStack_28;
          if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar6 = *piStack_28;
          uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar14[-1] == **(int **)(_UNK_00ff3edc + 0xff3ab4)) {
                puVar10 = (undefined4 *)(iVar6 + *piVar14 * 8 + 0xc0);
                goto LAB_00ff3afc;
              }
              uVar7 = uVar7 - 1;
              piVar14 = piVar14 + 2;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_00ff3edc + 0xff3ab4),0);
LAB_00ff3afc:
          iVar6 = (*(code *)*puVar10)(piVar5,puVar10[1]);
          piVar5 = piStack_28;
          if (iVar6 == 0) {
            if (piStack_28 == (int *)0x0) {
              return iVar3;
            }
            iVar6 = *piStack_28;
            uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
            if (uVar7 == 0) goto LAB_00ff3cc4;
            piVar13 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            goto LAB_00ff3cac;
          }
          if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar6 = *piStack_28;
          uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar14[-1] == **(int **)(_UNK_00ff3ed0 + 0xff3b34)) {
                puVar10 = (undefined4 *)(iVar6 + *piVar14 * 8 + 0xc0);
                goto LAB_00ff3b7c;
              }
              uVar7 = uVar7 - 1;
              piVar14 = piVar14 + 2;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_00ff3ed0 + 0xff3b34),0);
LAB_00ff3b7c:
          piVar5 = (int *)(*(code *)*puVar10)(piVar5,puVar10[1]);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar6 = *piVar13;
          piVar14 = (int *)0x0;
          if (piVar5 != (int *)0x0) {
            uVar7 = (uint)*(byte *)(**(int **)(_UNK_00ff3ed4 + 0xff3bb8) + 0xb8);
            if ((uVar7 <= *(byte *)(*piVar5 + 0xb8)) &&
               (piVar14 = piVar5,
               *(int *)(*(int *)(*piVar5 + 100) + uVar7 * 4 + -4) !=
               **(int **)(_UNK_00ff3ed4 + 0xff3bb8))) {
              piVar14 = (int *)0x0;
            }
          }
          uVar4 = Rotatelab_SoLevelData__ParseSingleBlaster_fe30cc(param_1,piVar14);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar11 = *(int *)(iVar6 + 8);
          uVar7 = *(uint *)(iVar6 + 0xc);
          piVar5 = *(int **)(_UNK_00ff3ed8 + 0xff3c20);
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar7 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar6 + 0xc) = uVar7 + 1;
            puVar10 = (undefined4 *)(iVar11 + uVar7 * 4 + 0x10);
            *puVar10 = uVar4;
            thunk_FUN_00ec5080(puVar10,uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_267dae0
                      (iVar6,uVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38)
                      );
          }
        } while( true );
      }
    }
  }
  return iVar3;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 2;
    if (uVar7 == 0) break;
LAB_00ff3cac:
    if (piVar13[-1] == **(int **)(_UNK_00ff3ee0 + 0xff3c98)) {
      puVar10 = (undefined4 *)(iVar6 + *piVar13 * 8 + 0xc0);
      goto LAB_00ff3ce0;
    }
  }
LAB_00ff3cc4:
  puVar10 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_00ff3ee0 + 0xff3c98),0);
LAB_00ff3ce0:
  (*(code *)*puVar10)(piVar5,puVar10[1]);
  return iVar3;
}

