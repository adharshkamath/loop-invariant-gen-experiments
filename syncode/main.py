import os
import json
from syncode import Syncode
import warnings
warnings.filterwarnings('ignore')

model_name = "/data/share/models/hugging_face/models--Qwen--Qwen2.5-Coder-7B/snapshots/4c1c1611f30619a8695cf6d44b492a25c52b6f00/"
grammar_file = open("invariants.lark", "r") 
grammar = grammar_file.read()
grammar_file.close()

# Load the Syncode augmented model
syn_llm = Syncode(model = model_name, mode='grammar_mask', grammar=grammar, parse_output_only=True, log_level=2)