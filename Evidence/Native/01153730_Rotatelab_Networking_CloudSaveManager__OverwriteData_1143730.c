/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$OverwriteData
void Rotatelab_Networking_CloudSaveManager__OverwriteData (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* source, Rotatelab_Networking_CloudSaveData_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02c445ec) */
/* WARNING: Removing unreachable block (ram,0x02c44600) */
/* WARNING: Removing unreachable block (ram,0x02c44614) */
/* WARNING: Removing unreachable block (ram,0x02c44620) */
/* WARNING: Removing unreachable block (ram,0x02c4462c) */
/* WARNING: Removing unreachable block (ram,0x02c44630) */
/* WARNING: Removing unreachable block (ram,0x02c4464c) */
/* WARNING: Removing unreachable block (ram,0x02c44658) */
/* WARNING: Removing unreachable block (ram,0x02c4465c) */
/* WARNING: Removing unreachable block (ram,0x02c44678) */
/* WARNING: Removing unreachable block (ram,0x02c44768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$OverwriteData
   void Rotatelab_Networking_CloudSaveManager__OverwriteData
   (Rotatelab_Networking_CloudSaveManager_o* __this, Rotatelab_Networking_CloudSaveData_o* source,
   Rotatelab_Networking_CloudSaveData_o* target, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__OverwriteData_1143730
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  
  pcVar9 = (char *)(_UNK_011537a0 + 0x1153748);
  cVar1 = *pcVar9;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011537a4 + 0x115375c));
    cVar1 = '\x01';
    *pcVar9 = '\x01';
  }
  uVar2 = Rotatelab_Networking_CloudSaveManager__SerializeData_1143c64(cVar1,param_2);
  if (*(int *)(**(int **)(_UNK_011537a8 + 0x115377c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar9 = (char *)(_UNK_02c444fc + 0x2c444b0);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c44500 + 0x2c444c4),param_3,0);
    *pcVar9 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c44504 + 0x2c444d8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar9 = (char *)(_UNK_02c44788 + 0x2c44528);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c4478c + 0x2c4453c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c44790 + 0x2c44548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c44794 + 0x2c44554));
    *pcVar9 = '\x01';
  }
  piVar3 = (int *)Newtonsoft_Json_JsonSerializer__CreateDefault_2c33c20(0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_02c44798 + 0x2c4457c));
  System_IO_StringReader___ctor_2b387b8(uVar4,uVar2,0);
  piVar5 = (int *)thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_02c4479c + 0x2c4459c));
  Newtonsoft_Json_JsonTextReader___ctor_2c34368(piVar5,uVar4);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar3 + 0x1c0))(piVar3,piVar5,param_3,*(undefined4 *)(*piVar3 + 0x1c4));
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_02c447b0 + 0x2c44708)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xc0);
          goto LAB_02c44750;
        }
        uVar8 = uVar8 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_02c447b0 + 0x2c44708),0);
LAB_02c44750:
    (*(code *)*puVar7)(piVar5,puVar7[1]);
  }
  return;
}

