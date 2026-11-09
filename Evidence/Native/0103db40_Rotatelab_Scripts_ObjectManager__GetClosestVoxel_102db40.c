/* IL2CPP: Rotatelab.Scripts.ObjectManager$$GetClosestVoxel
Rotatelab_Scripts_VoxelController_o* Rotatelab_Scripts_ObjectManager__GetClosestVoxel (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$GetClosestVoxel
   Rotatelab_Scripts_VoxelController_o* Rotatelab_Scripts_ObjectManager__GetClosestVoxel
   (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method); */

int * Rotatelab_Scripts_ObjectManager__GetClosestVoxel_102db40(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  
  pcVar6 = (char *)(_UNK_0103dd78 + 0x103db60);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103dd7c + 0x103db74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103dd80 + 0x103db80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103dd84 + 0x103db8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103dd88 + 0x103db98));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = 0;
  UnityEngine_Transform__get_position_36149b0(&uStack_68,*(int *)(param_1 + 0x4c),0);
  fVar2 = fStack_60;
  fVar13 = *(float *)(param_1 + 0x78);
  uVar1 = CONCAT44(uStack_64,uStack_68);
  piVar7 = (int *)0x0;
  piVar10 = (int *)0x0;
  puVar11 = *(undefined4 **)(_UNK_0103dd8c + 0x103dbf4);
  puVar9 = *(uint **)(_UNK_0103dd90 + 0x103dc00);
  fVar14 = _UNK_0103dd74;
  fVar15 = _UNK_0103dd74;
  while( true ) {
    if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x58) + 0xc) <= iVar8) break;
    if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (*(int *)(param_1 + 0x58),iVar8,*puVar11);
    if (piVar3 != (int *)0x0) {
      uVar4 = *puVar9;
      if ((uint)*(byte *)(uVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) {
        bVar12 = *(uint *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(uVar4 + 0xb8) * 4 + -4) ==
                 uVar4;
        if (bVar12) {
          uVar4 = (uint)*(byte *)(piVar3 + 6);
        }
        if (bVar12 && uVar4 == 0) {
          iVar5 = UnityEngine_Component__get_transform_35fe190(piVar3,0);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Transform__get_position_36149b0(&uStack_68,iVar5,0);
          uVar17 = FloatVectorSub(CONCAT44(uStack_64,uStack_68),uVar1,2,0x20);
          uVar17 = FloatVectorMult(uVar17,uVar17,2,0x20);
          fVar16 = (float)uVar17 + (float)((ulonglong)uVar17 >> 0x20) +
                   (fStack_60 - fVar2) * (fStack_60 - fVar2);
          if (fVar16 < fVar15) {
            piVar10 = piVar3;
            fVar15 = fVar16;
          }
          if (fVar16 < fVar14) {
            Rotatelab_Scripts_VoxelController__get_Position_105d1e4(&uStack_68,piVar3,0);
            iVar5 = Rotatelab_Scripts_ObjectManager__IsFarFromActivePropellerTargets_102dd98
                              (param_1,uStack_68,uStack_64,fStack_60,fVar13 * fVar13);
            if (iVar5 != 0) {
              piVar7 = piVar3;
              fVar14 = fVar16;
            }
          }
        }
      }
    }
    iVar8 = iVar8 + 1;
  }
  if (*(int *)(**(int **)(_UNK_0103dd94 + 0x103dd38) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar8 = UnityEngine_Object__op_Inequality_36018e4(piVar7,0,0);
  if (iVar8 != 0) {
    piVar10 = piVar7;
  }
  return piVar10;
}

