/* IL2CPP: Rotatelab.Save.SaveManager$$GetLong
int64_t Rotatelab_Save_SaveManager__GetLong (System_String_o* key, int64_t defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SaveManager$$GetLong
   int64_t Rotatelab_Save_SaveManager__GetLong (System_String_o* key, int64_t defaultValue, const
   MethodInfo* method); */

void Rotatelab_Save_SaveManager__GetLong_1082ce0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  uVar1 = System_Int64__ToString_2b6cd68(&uStack_10,0);
  uVar1 = UnityEngine_PlayerPrefs__GetString_35f70c4(param_1,uVar1,0);
  System_Int64__Parse_2b6d878(uVar1,0);
  return;
}

