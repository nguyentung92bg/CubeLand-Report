/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<AnimateRainbowBlasterEntrance>b__63_1
void Rotatelab_Scripts_PlaceableManager___c___AnimateRainbowBlasterEntrance_b__63_1 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<AnimateRainbowBlasterEntrance>b__63_1
   void Rotatelab_Scripts_PlaceableManager___c___AnimateRainbowBlasterEntrance_b__63_1
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BlasterController_o*
   blaster, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___AnimateRainbowBlasterEntrance_b__63_1_104b208
               (undefined4 param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  
  pcVar6 = (char *)(_UNK_0105b304 + 0x105b220);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b308 + 0x105b234));
    *pcVar6 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  pcVar6 = (char *)(_UNK_0105b30c + 0x105b264);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b310 + 0x105b278));
    *pcVar6 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_0105b314 + 0x105b290) + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localRotation_361507c(iVar3,*puVar4,puVar4[1],puVar4[2],puVar4[3],0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(_UNK_0105b318 + 0x105b2d8);
  *(undefined1 *)(param_2 + 199) = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_0110c218 + 0x110c05c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c21c + 0x110c070),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c220 + 0x110c07c));
    *pcVar6 = '\x01';
  }
  piVar9 = *(int **)(_UNK_0110c224 + 0x110c094);
  piVar5 = (int *)(iVar3 + 0x1c);
  iVar7 = *piVar5;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar7 = UnityEngine_Object__op_Equality_36033f4(iVar7,0,0);
  if (iVar7 != 0) {
    return;
  }
  uVar8 = *(undefined4 *)(iVar3 + 0x20);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar7 = UnityEngine_Object__op_Inequality_36018e4(uVar8,0,0);
  if (iVar7 != 0) {
    uVar10 = *(undefined4 *)(iVar3 + 0x20);
    uVar8 = *(undefined4 *)(iVar3 + 0x24);
    if (*(int *)(**(int **)(_UNK_0110c228 + 0x110c108) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__SetLayerRecursively_fc27c4(uVar10,uVar8,0);
  }
  *(undefined4 *)(iVar3 + 0x20) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x20),0);
  if (*(int *)(iVar3 + 0x14) != 0) {
    UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(iVar3 + 0x14),0,0);
    if (*(int *)(iVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_RawImage__set_texture_39b6be0(*(int *)(iVar3 + 0x18),0,0);
    if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(iVar3 + 0x10),0,0);
    if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Camera__set_targetTexture_35adc00(*(int *)(iVar3 + 0x10),0,0);
    if (*piVar5 != 0) {
      UnityEngine_RenderTexture__Release_35e0384(*piVar5,0);
      iVar3 = *piVar5;
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Object__Destroy_3609820(iVar3,0);
      *piVar5 = 0;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar5 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar5 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

