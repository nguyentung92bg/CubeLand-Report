/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$Update
void Rotatelab_Scripts_PilotBlasterController__Update (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterController$$Update
   void Rotatelab_Scripts_PilotBlasterController__Update
   (Rotatelab_Scripts_PilotBlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PilotBlasterController__Update_1040a14(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar1 = Rotatelab_Scripts_BlasterController__get_IsBeingPlacedToDock_1030d80(param_1,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xc0) == '\0') {
      iVar1 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_1,0);
      if (iVar1 == 0) {
        pfVar2 = (float *)(param_1 + 0x18c);
      }
      else {
        pfVar2 = (float *)(param_1 + 0x188);
      }
    }
    else {
      pfVar2 = (float *)(param_1 + 400);
    }
  }
  else {
    pfVar2 = (float *)(param_1 + 0x194);
  }
  fVar9 = *pfVar2;
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x130),0);
    pcVar5 = (char *)(_UNK_01050b18 + 0x1050a98);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01050b1c + 0x1050aac));
      *pcVar5 = '\x01';
    }
    iVar3 = *(int *)(**(int **)(_UNK_01050b20 + 0x1050ac4) + 0x5c);
    uVar6 = *(undefined4 *)(iVar3 + 0x18);
    uVar7 = *(undefined4 *)(iVar3 + 0x1c);
    uVar8 = *(undefined4 *)(iVar3 + 0x20);
    fVar4 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    if (iVar1 != 0) {
      UnityEngine_Transform__Rotate_3616240(iVar1,uVar6,uVar7,uVar8,fVar9 * fVar4,1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

