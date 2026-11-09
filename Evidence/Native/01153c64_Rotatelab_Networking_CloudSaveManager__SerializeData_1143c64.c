/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$SerializeData
System_String_o* Rotatelab_Networking_CloudSaveManager__SerializeData (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02c43e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$SerializeData
   System_String_o* Rotatelab_Networking_CloudSaveManager__SerializeData
   (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* data,
   const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__SerializeData_1143c64
               (undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  
  pcVar9 = (char *)(_UNK_01153cc0 + 0x1153c78);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153cc4 + 0x1153c8c));
    *pcVar9 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01153cc8 + 0x1153ca0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar9 = (char *)(_UNK_02c43b94 + 0x2c43b48);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c43b98 + 0x2c43b5c),0);
    *pcVar9 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c43b9c + 0x2c43b70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar9 = (char *)(_UNK_02c43c14 + 0x2c43bbc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c43c18 + 0x2c43bd0));
    *pcVar9 = '\x01';
  }
  piVar1 = (int *)Newtonsoft_Json_JsonSerializer__CreateDefault_2c33c20(0);
  if (*(int *)(**(int **)(_UNK_02c43c1c + 0x2c43bf0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar9 = (char *)(_UNK_02c43e9c + 0x2c43c68);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c43ea0 + 0x2c43c7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c43ea4 + 0x2c43c88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c43ea8 + 0x2c43c94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c43eac + 0x2c43ca0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c43eb0 + 0x2c43cac));
    *pcVar9 = '\x01';
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_02c43eb4 + 0x2c43cc4));
  System_Text_StringBuilder___ctor_2a14a7c(uVar2,0x100,0);
  if (*(int *)(**(int **)(_UNK_02c43eb8 + 0x2c43ce8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  piVar4 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_02c43ebc + 0x2c43d10));
  System_IO_StringWriter___ctor_2b38d70(piVar4,uVar2,uVar3,0);
  piVar5 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_02c43ec0 + 0x2c43d34));
  Newtonsoft_Json_JsonTextWriter___ctor_2c33ec8(piVar5,piVar4);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Newtonsoft_Json_JsonWriter__set_Formatting_2c34058(piVar5,uVar2);
  (**(code **)(*piVar1 + 0x1d0))(piVar1,piVar5,param_2,0,*(undefined4 *)(*piVar1 + 0x1d4));
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar1 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar1[-1] == **(int **)(_UNK_02c43ec4 + 0x2c43dd4)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar1 * 8 + 0xc0);
          goto LAB_02c43e1c;
        }
        uVar8 = uVar8 - 1;
        piVar1 = piVar1 + 2;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_02c43ec4 + 0x2c43dd4),0);
LAB_02c43e1c:
    (*(code *)*puVar7)(piVar5,puVar7[1]);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

