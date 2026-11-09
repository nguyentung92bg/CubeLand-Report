/* IL2CPP: Rotatelab.Networking.CloudSaveData$$MigrateToV3
void Rotatelab_Networking_CloudSaveData__MigrateToV3 (Rotatelab_Networking_CloudSaveData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveData$$MigrateToV3
   void Rotatelab_Networking_CloudSaveData__MigrateToV3 (Rotatelab_Networking_CloudSaveData_o*
   __this, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveData__MigrateToV3_1141094(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_0115116c + 0x11510ac);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151170 + 0x11510c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151174 + 0x11510cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01151178 + 0x11510d8));
    *pcVar4 = '\x01';
  }
  Rotatelab_Save_SaveManager__GetDateTime_1082e14
            (&uStack_18,**(undefined4 **)(_UNK_0115117c + 0x11510f4),0,0,0);
  if (*(int *)(**(int **)(_UNK_01151180 + 0x1151110) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Extensions__GetAbsoluteWeek_fc315c(uStack_18,uStack_14,0);
  puVar3 = *(undefined4 **)(_UNK_01151184 + 0x1151148);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  iVar2 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar3,1,0);
  *(uint *)(param_1 + 0x94) = iVar2 - 1U & ~((int)(iVar2 - 1U) >> 0x1f);
  return;
}

